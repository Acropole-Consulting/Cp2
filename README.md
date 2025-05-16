## 📝 Descrição do Projeto

Desenvolvemos um circuito eletrônico para monitorar, por meio de um display LCD, a temperatura e a umidade da adega da Vinheria Agnello. O sistema fornece informações precisas e em tempo real, permitindo que a vinheria gerencie o ambiente da adega de maneira eficiente e evite condições que possam comprometer a qualidade dos vinhos.
  
Veja o vídeo explicativo do projeto 👉 **[Clique aqui!](https://vm.tiktok.com/ZMSREwNuL/)**

## 👥 Equipe do Projeto
* Vitor Ramos de Farias 
* Carlos Eduardo Sanches Mariano 
* Tomé Rossi Giani 
* Nicholas Braga de Souza 
* Carlos Eduardo Goes

  
<h2 align="left">🖥️ Circuito</h2>
<img src="https://github.com/user-attachments/assets/8dca4808-71e8-434c-b4f9-b2665f2c5592" >
<div align="center">
   
</div>


<div style="display: flex; justify-content: space-between; align-items: flex-start; gap: 40px;">
    <section style="flex: 1;">
Veja o vídeo explicativo do projeto 👉 **[Clique aqui!](https://www.tinkercad.com/things/7JwIQRuH129-cp2-edge-/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=-iuyU3SJD98re6uGchg4mXYNVrO0RNIHapWxlbPYhVc)**
        <h3 style="font-size: 16px; margin-bottom: 15px;">📦 Lista de Componentes</h3>
        <ul style="list-style-type: none; font-size: 16px; padding-left: 0;">
            <li style="margin-bottom: 8px;"> 1x Arduino Uno R3
            <li style="margin-bottom: 8px;"> 1x DHT11
            <li style="margin-bottom: 8px;"> 1x Display LCD
            <li style="margin-bottom: 8px;"> 1xx Sensor de luminosidade LDR
            <li style="margin-bottom: 8px;"> 10x Fios jumper
            <li style="margin-bottom: 8px;"> 1x Resistor de 10kΩ
            <li style="margin-bottom: 8px;"> 3x Resistores de 220Ω
            <li style="margin-bottom: 8px;"> 3x LEDs (verde, amarelo,vermelho) 
            <li style="margin-bottom: 8px;"> 1x Buzzer
            <li style="margin-bottom: 8px;"> 1x Protobord
            <li style="margin-bottom: 8px;"> 1x Potenciômetro
             <li style="margin-bottom: 8px;"> Fonte de alimentação 5V ou 1x cabo USB
        </ul>
    </section>
    <section style="flex: 2;">
        <h3 style="font-size: 18px; margin-bottom: 15px;">📌 Instruções de Montagem</h3>
            <li style="margin-bottom: 8px;"> CD: Alimentação (5V e GND), contraste (potenciômetro), pinos de controle (RS, E, RW ao GND) e pinos de dados (D4-D7) aos pinos digitais do Arduino. A luz de fundo também precisa de 5V e GND.
            <li style="margin-bottom: 8px;"> Potenciômetro: Alimentação (5V e GND) e o pino central ao controle de contraste do LCD.
            <li style="margin-bottom: 8px;"> Buzzer: Um pino a um pino digital do Arduino e o outro ao GND.
            <li style="margin-bottom: 8px;"> LDR: Um pino ao 5V, o outro conectado a um resistor para o GND e ao mesmo tempo a um pino   analógico do Arduino.
            <li style="margin-bottom: 8px;"> LEDs: Cada um com um resistor, conectados a pinos digitais diferentes do Arduino e ao GND. Alimentação: O Arduino é alimentado via USB.
    </section>
</div>

<h2 align="left">⚙️ Funcionamento</h2>
<p>
  O sistema
foto resistor capita a ausência e a presença de luz, medidindo a intensidade da luz mostrada com os LEDs e caso necessário acionará o buzzer. O DHT 22 vai medir a temperatura e a humidade do ar e irá transferir essa informação para o display de lcd 
led verde sinaliza que esta tudo certo
led amarelo sinaliza que precisa de ajuste
led vermelho sinaliza que está em estado "critico"
Com o led vermelho acesso o buzzer começa apitar<br>
</p>
