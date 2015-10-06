// CODIGO EM CC MODIFICADO POR NERDKINGTEAM
// VISITE: nerdking.com.br
// youtube.com/nerdkingteam
// This sketch will send out a Nikon D50 trigger signal (probably works with most Nikons)
// See the full tutorial at http://www.ladyada.net/learn/sensors/ir.html
// this code is public domain, please enjoy!
 
int IRledPin =  13;    // LED connected to digital pin 13
int Botao = 8;
int Botao2 = 9;
int Botao3 = 10;
int EstadoBotao = 0;
int EstadoBotao2 = 0;
int EstadoBotao3 = 0;
// The setup() method runs once, when the sketch starts
 
void setup()   {
// initialize the IR digital pin as an output:
pinMode(IRledPin, OUTPUT);
pinMode(Botao, INPUT);
pinMode(Botao2, INPUT);
pinMode(Botao3, INPUT);
Serial.begin(9600);
}
 
void loop()
{
  EstadoBotao = digitalRead(Botao);
  EstadoBotao2 = digitalRead(Botao2);
  EstadoBotao3 = digitalRead(Botao3);
Serial.println("Sending IR signal");
if (EstadoBotao3 == HIGH){
  SendChannelUpCode3();
  delay(500);
}
if (EstadoBotao2 == HIGH){
  SendChannelUpCode2();
  delay(500);
}
if (EstadoBotao == HIGH){ 
SendChannelUpCode();
delay(500);
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

void SendChannelUpCode3(){
delayMicroseconds(15464);
pulseIR(4140);
delayMicroseconds(4420);
pulseIR(560);
delayMicroseconds(1660);
pulseIR(560);
delayMicroseconds(1620);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(520);
pulseIR(560);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(520);
pulseIR(580);
delayMicroseconds(520);
pulseIR(580);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(520);
pulseIR(580);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(520);
pulseIR(560);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(560);
delayMicroseconds(1620);
pulseIR(560);
delayMicroseconds(45980);
pulseIR(4140);
delayMicroseconds(4420);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(520);
pulseIR(580);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(540);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(580);
delayMicroseconds(1640);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
}
  
  
void SendChannelUpCode2() {
delayMicroseconds(54904);
pulseIR(4040);
delayMicroseconds(4440);
pulseIR(520);
delayMicroseconds(1680);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(520);
delayMicroseconds(1680);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(1680);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(520);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(1680);
pulseIR(520);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(520);
delayMicroseconds(1680);
pulseIR(520);
delayMicroseconds(1660);
pulseIR(540);
}

void SendChannelUpCode() {
// This is the code for the CHANNEL + for the downstairs TV COMCAST
delayMicroseconds(80);
pulseIR(4160);
delayMicroseconds(4400);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(520);
pulseIR(580);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(520);
pulseIR(580);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1620);
pulseIR(580);
delayMicroseconds(1620);
pulseIR(580);
delayMicroseconds(520);
pulseIR(560);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(45980);
pulseIR(4120);
delayMicroseconds(4440);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(520);
pulseIR(580);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(520);
pulseIR(580);
delayMicroseconds(1640);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(520);
delayMicroseconds(46020);
pulseIR(4100);
delayMicroseconds(4420);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(560);
delayMicroseconds(1640);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(580);
delayMicroseconds(540);
pulseIR(540);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(580);
pulseIR(520);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(1680);
pulseIR(520);
}
