//PULSADOR + LED INTERNO
int pinInterno = 13;
void setup() {
  pinMode(2, INPUT);
  pinMode(pinInterno, OUTPUT);

}

void loop() {
  if (digitalRead(2) == HIGH) {
    digitalWrite(pinInterno, HIGH);
  } 
  else {
    digitalWrite(pinInterno, LOW);    
  }
}
