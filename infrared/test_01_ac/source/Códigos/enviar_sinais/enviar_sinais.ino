// CODIGO EM CC MODIFICADO POR NERDKINGTEAM
// VISITE: nerdking.com.br
// youtube.com/nerdkingteam
// This sketch will send out a Nikon D50 trigger signal (probably works with most Nikons)
// See the full tutorial at http://www.ladyada.net/learn/sensors/ir.html
// this code is public domain, please enjoy!
 
int IRledPin =  13;    // LED connected to digital pin 13
int Botao = 8;
int EstadoBotao = 0;
// The setup() method runs once, when the sketch starts
 
void setup()   {
  // initialize the IR digital pin as an output:
  pinMode(IRledPin, OUTPUT);
//  pinMode(Botao, INPUT); 
  Serial.begin(9600);
}
 
void loop()
{
//  EstadoBotao = digitalRead(Botao);
//  Serial.println("Sending IR signal");
//  if (EstadoBotao == HIGH)
//  { 
    delay(10000); // Altere este delay para melhores resultados
    Serial.println("Enviando Sinal");
    SendChannelUpCode();
//  }
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
  delayMicroseconds(41376);
  pulseIR(4320);
  delayMicroseconds(4260);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(500);
  delayMicroseconds(600);
  pulseIR(460);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(5140);
  pulseIR(4260);
  delayMicroseconds(4300);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(560);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(580);
  pulseIR(480);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(500);
  delayMicroseconds(1620);
  pulseIR(500);
  delayMicroseconds(1640);
  pulseIR(500);
}
