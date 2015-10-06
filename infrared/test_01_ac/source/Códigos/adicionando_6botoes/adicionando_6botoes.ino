// CODIGO EM CC MODIFICADO POR NERDKINGTEAM
// VISITE: nerdking.com.br
// youtube.com/nerdkingteam
// This sketch will send out a Nikon D50 trigger signal (probably works with most Nikons)
// See the full tutorial at http://www.ladyada.net/learn/sensors/ir.html
// this code is public domain, please enjoy!
 
int IRledPin =  13;    // LED infravermelho conectado no pino 13
int Botao = 4; // Pinos 4 até 9 aonde os botões estão conectados
int Botao2 = 5; 
int Botao3 = 6;
int Botao4 = 7;
int Botao5 = 8;
int Botao6 = 9;
int EstadoBotao = 0; // As proximas 5 linhas estão estão declarando o estado dos botões para 0
int EstadoBotao2 = 0;
int EstadoBotao3 = 0;
int EstadoBotao4 = 0;
int EstadoBotao5 = 0;
int EstadoBotao6 = 0;
// The setup() method runs once, when the sketch starts
 
void setup()   {
// initialize the IR digital pin as an output:
pinMode(IRledPin, OUTPUT);
pinMode(Botao, INPUT);
pinMode(Botao2, INPUT);
pinMode(Botao3, INPUT);
pinMode(Botao4, INPUT);
pinMode(Botao5, INPUT);
pinMode(Botao6, INPUT);
Serial.begin(9600);
}
 
void loop()
{
  EstadoBotao = digitalRead(Botao);
  EstadoBotao2 = digitalRead(Botao2);
  EstadoBotao3 = digitalRead(Botao3);
  EstadoBotao4 = digitalRead(Botao4);
  EstadoBotao5 = digitalRead(Botao5);
  EstadoBotao6 = digitalRead(Botao6);
Serial.println("Sending IR signal");
if (EstadoBotao == HIGH){
  SendChannelUpCode();
  delay(250); // Altere este delay para melhores resultados no envio de sinais
}
if (EstadoBotao2 == HIGH){ 
SendChannelUpCode2();
delay(250); // Altere este delay para melhores resultados no envio de sinais
}
if (EstadoBotao3 == HIGH){
  SendChannelUpCode3();
  delay(250); // Altere este delay para melhores resultados no envio de sinais
}
if (EstadoBotao4 == HIGH){ 
SendChannelUpCode4();
delay(250); // Altere este delay para melhores resultados no envio de sinais
}
if (EstadoBotao5 == HIGH){ 
SendChannelUpCode5();
delay(250); // Altere este delay para melhores resultados no envio de sinais
}
if (EstadoBotao6 == HIGH){ 
SendChannelUpCode6();
delay(250); // Altere este delay para melhores resultados no envio de sinais
}
}

// This procedure sends a 38KHz pulse to the IRledPin
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseIR(long microsecs) {
// we'll count down from the number of microseconds we are told to wait
 
cli();  // this turns off any background interrupts
 
while (microsecs > 0) {
// 38 kHz is about 13 microseconds high and 13 microseconds low
digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
delayMicroseconds(10);         // hang out for 10 microseconds
digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
delayMicroseconds(10);         // hang out for 10 microseconds
 
// so 26 microseconds altogether
microsecs -= 26;
}
 
sei();  // this turns them back on
}
void SendChannelUpCode() {
//Cole no lugar dessa descrição um dos codigos que você coletou
}

void SendChannelUpCode2() {
//Cole no lugar dessa descrição um dos codigos que você coletou
}

void SendChannelUpCode3() {
//Cole no lugar dessa descrição um dos codigos que você coletou
}

void SendChannelUpCode4() {
//Cole no lugar dessa descrição um dos codigos que você coletou
}

void SendChannelUpCode5() {
//Cole no lugar dessa descrição um dos codigos que você coletou
}

void SendChannelUpCode6() {
//Cole no lugar dessa descrição um dos codigos que você coletou
}
