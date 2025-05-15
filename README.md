<h1 align="center">
  <img src="https://readme-typing-svg.herokuapp.com?font=Montserrat&weight=600&pause=1000&color=2E68DF&center=true&vCenter=true&repeat=false&width=434&height=49&lines=Welcome%F0%9F%91%8B;This+is+the+second+Cp+by+Edge+Computing+%F0%9F%A4%98+"/>
</h1>

## 📝 Descrição do Projeto
<p>
   Desenvolvemos um circuito eletrônico para monitorar, por meio de um display LCD, a temperatura e a umidade da adega da Vinheria Agnello. O sistema fornece informações precisas e em tempo real, permitindo que a vinheria gerencie o ambiente da adega de maneira eficiente e evite condições que possam comprometer a qualidade dos vinhos.

Se quiser uma versão ainda mais formal ou detalhada, é só pedir!
</p>

<h2 align="left">🖥️ Circuito</h2>
<div align="center">
   
</div>

<h2 align="left">🔌 Conexões Físicas - Passo a Passo</h2>

<div style="display: flex; justify-content: space-between; align-items: flex-start; gap: 40px;">
    <section style="flex: 1;">
        <h3 style="font-size: 16px; margin-bottom: 15px;">📦 Lista de Componentes</h3>
        <ul style="list-style-type: none; font-size: 16px; padding-left: 0;">
            <li style="margin-bottom: 8px;">• 1x Arduino Uno R3</li>
            <li style="margin-bottom: 8px;">• 1x DHT22
            <li style="margin-bottom: 8px;">• 1x Display LCD
            <li style="margin-bottom: 8px;">• 3x Resistores 220Ω
            <li style="margin-bottom: 8px;">• 1x Resistor 10Ω
            <li style="margin-bottom: 8px;">• 17x Jumper Macho-Macho
            <li style="margin-bottom: 8px;">• 6x Jumper Macho-Femea
            <li style="margin-bottom: 8px;">• 3x LEDs (verde, amarelo,vermelho) 
            <li style="margin-bottom: 8px;">• 1x Buzzer
            <li style="margin-bottom: 8px;">• 1x Protobord
        </ul>
    </section>
    <section style="flex: 2;">
        <h3 style="font-size: 18px; margin-bottom: 15px;">📌 Instruções de Montagem</h3>
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
