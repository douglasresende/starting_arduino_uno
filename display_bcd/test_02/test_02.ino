// https://www.youtube.com/watch?v=Ls-YIEoMZ3Y&index=21&list=PL05085BAC19CB5DF1

void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9,0);
}

void loop(){
  resetar();
  digitalWrite(2, 1);
  delay(25);
  resetar();
  digitalWrite(3, 1);
  delay(25);
  resetar();
  digitalWrite(4, 1);
  delay(25);
  resetar();
  digitalWrite(5, 1);
  delay(25);
  resetar();
  digitalWrite(6, 1);
  delay(25);
  resetar();
  digitalWrite(7, 1);
  delay(25);
}

void resetar()
{
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  delay(25);
}

