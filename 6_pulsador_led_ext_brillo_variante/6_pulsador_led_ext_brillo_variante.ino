//PULSADOR + LED INTERNO + POTENCIOMETRO
int pinExterno = 3;
int pinPulsador = 2;
int estado = LOW;
int brillo;

void setup() {
  pinMode(pinPulsador, INPUT);
  pinMode(pinExterno, OUTPUT);

}

void loop() {
  while(digitalRead(pinPulsador) == LOW){//Espero a que se encienda
    
  }
  estado = digitalRead(pinExterno);
  digitalWrite(pinExterno, !estado);
  
  for(brillo = 0; brillo < 256; brillo++){
    analogWrite(pinExterno, brillo);
    delay(15);
  }
    
  for(brillo = 255; (brillo >= 0); brillo--){
    analogWrite(pinExterno, brillo);
    delay(15);
  }
  
  while(digitalRead(pinPulsador) == HIGH){//Antirebote
    
  }  
}
