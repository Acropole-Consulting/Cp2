#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD(0x27, 16, 2);

const int temp_ok = 0;
const int frio = 1;
const int quente = 2;
int tempAmbiente = temp_ok;

const int umid_ok = 0;
const int umid_baixa = 1;
const int umid_alta = 2;
int umidAmbiente = umid_ok;

const int M_luz  = 0;
const int M_temp = 1;
const int M_umid = 2;
int estadoDisplay = M_luz;

const int ledVermelho = 11;
const int ledAmarelo = 12;
const int ledVerde = 13;
const int ldr = A1;
const int buzzer = 10;
const int sensorTemp = A2;
const int sensorUmid = A0;

int valorLDR = 0;
float temp = 0;
int umid = 0;
int luminosidadePorcentagem = 0;

unsigned long millisDisplayAgora = 0;
unsigned long millisDisplayAnterior = 0;
int tempoMDisplay = 1000;

int contadorMedia = 0;
float somaTemp = 0;
int somaUmid = 0;
float mediaTemp = 0;
int mediaUmid = 0;

void setup() {
  LCD.init();
  LCD.backlight();

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(sensorUmid, INPUT);

  Serial.begin(9600);
}

void loop() {
  ler_sensores();
  verifica_sensores();
  aciona_alarmes();
  mostra_mensagem();
}

void ler_sensores() {
  valorLDR = analogRead(ldr);
  luminosidadePorcentagem = map(valorLDR, 0, 1023, 0, 100);
  Serial.print("LDR: ");
  Serial.print(valorLDR);
  Serial.print(" -> ");
  Serial.print(luminosidadePorcentagem);
  Serial.println(" %");

  int valorSensorTemp = analogRead(sensorTemp);
  float tensao = valorSensorTemp * 5.0 / 1024.0;
  temp = (tensao - 0.5) * 100;
  Serial.print("Temperatura: ");
  Serial.println(temp);

  int valorSensorUmi = analogRead(sensorUmid);
  umid = map(valorSensorUmi, 0, 1023, 0, 100);
  Serial.print("Umidade: ");
  Serial.println(umid);
}

void verifica_sensores() {
  // Classificação da luz (apenas lógica, sem controle de LEDs)
  if (valorLDR <= 50) {
    // Ambiente escuro
  } else if (valorLDR >= 150 && valorLDR <= 300) {
    // Meia-luz
  } else {
    // Claro
  }

  // Temperatura
  if (temp < 10) {
    tempAmbiente = frio;
  } else if (temp > 15) {
    tempAmbiente = quente;
  } else {
    tempAmbiente = temp_ok;
  }

  // Umidade
  if (umid < 50) {
    umidAmbiente = umid_baixa;
  } else if (umid > 70) {
    umidAmbiente = umid_alta;
  } else {
    umidAmbiente = umid_ok;
  }
}

void aciona_alarmes() {
  // LED verde sempre ligado se a luz ambiente for boa
  if (valorLDR >= 150 && valorLDR <= 300) {
    digitalWrite(ledVerde, HIGH);
  } else {
    digitalWrite(ledVerde, LOW);
  }

  // Alerta se qualquer sensor estiver fora do ideal
  if (tempAmbiente != temp_ok || umidAmbiente != umid_ok) {
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, HIGH);
    tone(buzzer, 1000);  // Som de 1kHz
  } else {
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    noTone(buzzer);
  }
}

void mostra_mensagem() {
  millisDisplayAgora = millis();
  somaTemp += temp;
  somaUmid += umid;
  contadorMedia++;

  if (millisDisplayAgora - millisDisplayAnterior > tempoMDisplay) {
    LCD.clear();
    LCD.setCursor(0, 0);

    switch (estadoDisplay) {
      case M_luz:
        if (valorLDR <= 50) {
          LCD.print("Ambiente: Escuro");
        } else if (valorLDR >= 150 && valorLDR <= 206) {
          LCD.print("Ambiente Meia-Luz");
        } else if (valorLDR >= 300) {
          LCD.print("Ambiente Claro!");
        } else {
          LCD.print("Ambiente Normal");
        }
        LCD.setCursor(0, 1);
        LCD.print("Luz: ");
        LCD.print(luminosidadePorcentagem);
        LCD.print(" %");
        estadoDisplay = M_temp;
        break;

      case M_temp:
        mediaTemp = somaTemp / contadorMedia;
        if (tempAmbiente == temp_ok) {
          LCD.print("Temp. OK");
        } else if (tempAmbiente == frio) {
          LCD.print("Temp. Baixa");
        } else {
          LCD.print("Temp. Alta");
        }
        LCD.setCursor(0, 1);
        LCD.print("Temp: ");
        LCD.print(mediaTemp);
        LCD.print(" C");
        estadoDisplay = M_umid;
        break;

      case M_umid:
        mediaUmid = somaUmid / contadorMedia;
        if (umidAmbiente == umid_ok) {
          LCD.print("Umid. OK");
        } else if (umidAmbiente == umid_baixa) {
          LCD.print("Umid. Baixa");
        } else {
          LCD.print("Umid. Alta");
        }
        LCD.setCursor(0, 1);
        LCD.print("Umid: ");
        LCD.print(mediaUmid);
        LCD.print(" %");
        estadoDisplay = M_luz;
        break;
    }

    somaTemp = 0;
    somaUmid = 0;
    contadorMedia = 0;

    millisDisplayAnterior = millis();
  }
}
