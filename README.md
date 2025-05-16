# 🍷 Monitoramento de Adega - Vinheria Agnello

Desenvolvemos um circuito eletrônico para monitorar, por meio de um display LCD, a **temperatura e a umidade da adega da Vinheria Agnello**. O sistema fornece informações **precisas e em tempo real**, permitindo que a vinheria gerencie o ambiente da adega de maneira eficiente, evitando condições que possam comprometer a qualidade dos vinhos.

📽️ **Veja o vídeo explicativo do projeto:** [Clique aqui!](https://vm.tiktok.com/ZMSREwNuL/)

---

## 👥 Equipe do Projeto
- Vitor Ramos de Farias  
- Carlos Eduardo Sanches Mariano  
- Tomé Rossi Giani  
- Nicholas Braga de Souza  
- Carlos Eduardo Goes  

---

## 🖥️ Circuito

📽️ **Veja o circuito no Tinkercad:**  
[Simulação do Circuito](https://www.tinkercad.com/things/7JwIQRuH129-cp2-edge-/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=-iuyU3SJD98re6uGchg4mXYNVrO0RNIHapWxlbPYhVc)

![Imagem do circuito](https://github.com/user-attachments/assets/8dca4808-71e8-434c-b4f9-b2665f2c5592)

---

## 📦 Lista de Componentes

- 1x Arduino Uno R3  
- 1x Sensor DHT11 (temperatura e umidade)  
- 1x Display LCD  
- 1x Sensor de luminosidade LDR  
- 10x Fios jumper  
- 1x Resistor de 10kΩ  
- 3x Resistores de 220Ω  
- 3x LEDs (verde, amarelo, vermelho)  
- 1x Buzzer  
- 1x Protoboard  
- 1x Potenciômetro  
- 1x Fonte de alimentação 5V ou cabo USB  

---

## 🔧 Instruções de Montagem

- **Display LCD**:  
  Conectar alimentação (5V e GND), pinos de controle (RS, E, RW ao GND) e pinos de dados (D4-D7) aos pinos digitais do Arduino. A luz de fundo também deve ser alimentada com 5V e GND.

- **Potenciômetro**:  
  Conectar os terminais laterais ao 5V e GND, e o pino central ao controle de contraste do LCD.

- **Buzzer**:  
  Um terminal conectado a um pino digital do Arduino, o outro ao GND.

- **LDR (Sensor de luz)**:  
  Um terminal ao 5V; o outro conectado a um resistor de 10kΩ para o GND e, simultaneamente, a uma entrada analógica do Arduino.

- **LEDs**:  
  Cada LED deve ser conectado com um resistor (220Ω) a um pino digital do Arduino e ao GND.

- **Alimentação**:  
  O Arduino pode ser alimentado via cabo USB ou fonte 5V.

---

## ⚙️ Funcionamento

O sistema opera da seguinte forma:

- O **sensor DHT11** mede a **temperatura e umidade** do ambiente e exibe os valores no **display LCD**.  
- O **sensor LDR** detecta a **presença ou ausência de luz**, indicando a intensidade luminosa por meio dos LEDs:
  - 🔵 **LED Verde**: condições ideais  
  - 🟡 **LED Amarelo**: necessidade de ajuste  
  - 🔴 **LED Vermelho**: condição crítica  
- Quando o **LED vermelho** é acionado, o **buzzer** também é ativado, emitindo um alerta sonoro.
