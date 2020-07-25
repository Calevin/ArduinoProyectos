//PULSADOR + LED INTERNO
int pinExterno = 3;
int pinPulsador = 2;

void setup() {
  pinMode(pinPulsador, INPUT);
  pinMode(pinExterno, OUTPUT);

}

void loop() {
  if (digitalRead(pinPulsador) == HIGH) {
    digitalWrite(pinExterno, HIGH);
  } 
  else {
    digitalWrite(pinExterno, LOW);    
  }
}
