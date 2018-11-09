int irIn1 = 2;
int irIn2 = 3;
int ledOut = 4;

void setup() {
  pinMode(irIn1, INPUT);
  pinMode(irIn2, INPUT);
  pinMode(ledOut, OUTPUT);

}

void loop() {
  int a = digitalRead(irIn1);
  int b = digitalRead(irIn2);
  if (a>0 || b>0){
    digitalWrite(ledOut, HIGH);}
  else {
    digitalWrite(ledOut, LOW);}
  
}
