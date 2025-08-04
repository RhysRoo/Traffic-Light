void setup() {

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  digitalWrite(5, HIGH);
  
  delay(3000);

  digitalWrite(4, HIGH);

  delay(1000);

  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  delay(20);

  digitalWrite(3, HIGH);

  delay(2000);

  digitalWrite(3, LOW);

  delay(20);

  digitalWrite(4, HIGH);

  delay(1000);

  digitalWrite(4, LOW);
}
