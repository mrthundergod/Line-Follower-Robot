int irIn1 = 2;
int irIn2 = 3;
int ledOut = 4;

void setup() {
  pinMode(irIn1, INPUT);
  pinMode(irIn2, INPUT);
  pinMode(ledOut, OUTPUT);
  Serial.begin(9600);
  Serial.println("The Dual IR Test");

}

void loop() {
  int a = digitalRead(irIn1);
  int b = digitalRead(irIn2);
  if (a>0){
    digitalWrite(ledOut, HIGH);
    Serial.println("Go Left!!!");
    }
  else if (b>0) {
    digitalWrite(ledOut, HIGH);
    Serial.println("Go Right!!!");
    }
  else if (a>0 && b>0){
    Serial.println("STOP!");
    digitalWrite(ledOut, HIGH);
    delay(1000);
    digitalWrite(ledOut, LOW);}
  else{
    digitalWrite(ledOut, LOW);
    }
  
}
