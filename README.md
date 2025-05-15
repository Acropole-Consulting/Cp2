<h1 align="center">
  <img src="https://readme-typing-svg.herokuapp.com?font=Montserrat&weight=600&pause=1000&color=2E68DF&center=true&vCenter=true&repeat=false&width=434&height=49&lines=Welcome%F0%9F%91%8B;This+is+the+second+Cp+by+Edge+Computing+%F0%9F%A4%98+"/>
</h1>

## 📝 Descrição do Projeto
<p>
   Desenvolvemos um circuito eletrônico para monitorar, por meio de um display LCD, a temperatura e a umidade da adega da Vinheria Agnello. O sistema fornece informações precisas e em tempo real, permitindo que a vinheria gerencie o ambiente da adega de maneira eficiente e evite condições que possam comprometer a qualidade dos vinhos.

Se quiser uma versão ainda mais formal ou detalhada, é só pedir!
</p>

<h2 align="left">🖥️ Circuito</h2>
<img src="https://github.com/user-attachments/assets/8dca4808-71e8-434c-b4f9-b2665f2c5592" >
<div align="center">
   
</div>

<h2 align="left">🔌 Conexões Físicas - Passo a Passo</h2>

<div style="display: flex; justify-content: space-between; align-items: flex-start; gap: 40px;">
    <section style="flex: 1;">
        <h3 style="font-size: 16px; margin-bottom: 15px;">📦 Lista de Componentes</h3>
        <ul style="list-style-type: none; font-size: 16px; padding-left: 0;">
            <li style="margin-bottom: 8px;">• 1x Arduino Uno R3
            <li style="margin-bottom: 8px;">• 1x DHT11
            <li style="margin-bottom: 8px;">• 1x Display LCD
            <li style="margin-bottom: 8px;">• 1xx Sensor de luminosidade LDR
            <li style="margin-bottom: 8px;">• 10x Fios jumper
            <li style="margin-bottom: 8px;">• 1x Resistor de 10kΩ
            <li style="margin-bottom: 8px;">• 3x Resistores de 220Ω
            <li style="margin-bottom: 8px;">• 3x LEDs (verde, amarelo,vermelho) 
            <li style="margin-bottom: 8px;">• 1x Buzzer
            <li style="margin-bottom: 8px;">• 1x Protobord
            <li style="margin-bottom: 8px;">• 1x Potenciômetro
             <li style="margin-bottom: 8px;">• Fonte de alimentação 5V ou 1x cabo USB
        </ul>
    </section>
    <section style="flex: 2;">
        <h3 style="font-size: 18px; margin-bottom: 15px;">📌 Instruções de Montagem</h3>
            <li style="margin-bottom: 8px;">• CD: Alimentação (5V e GND), contraste (potenciômetro), pinos de controle (RS, E, RW ao GND) e pinos de dados (D4-D7) aos pinos digitais do Arduino. A luz de fundo também precisa de 5V e GND.
            <li style="margin-bottom: 8px;">• Potenciômetro: Alimentação (5V e GND) e o pino central ao controle de contraste do LCD.
            <li style="margin-bottom: 8px;">• Buzzer: Um pino a um pino digital do Arduino e o outro ao GND.
            <li style="margin-bottom: 8px;">• LDR: Um pino ao 5V, o outro conectado a um resistor para o GND e ao mesmo tempo a um pino analógico do Arduino.
            <li style="margin-bottom: 8px;">• LEDs: Cada um com um resistor, conectados a pinos digitais diferentes do Arduino e ao GND. Alimentação: O Arduino é alimentado via USB.
    </section>
</div>

<h2 align="left">⚙️ Funcionamento</h2>
<p>
  O sistema
foto resistor capita a ausência e a presencia de luz e mede a intensidade da luz mostrada com os LEDs e caso necessário acionara o buzzer. O DHT 22 vai medir a temperatura e a humidade do ar e ira transferir essa informação para o display de lcd 
led verde sinaliza que esta tudo certo
led amarelo sinaliza que precisa de ajuste
led vermelho sinaliza que está em estado "critico"
Com o led vermelho acesso o buzzer começa apitar<br>
</p>
