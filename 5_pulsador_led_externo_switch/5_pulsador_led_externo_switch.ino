//PULSADOR + LED INTERNO
//LOGICA SWITCH
int pinExterno = 3;
int pinPulsador = 2;
int estado = LOW;
void setup() {
  pinMode(pinPulsador, INPUT);
  pinMode(pinExterno, OUTPUT);

}

void loop() {
  while(digitalRead(pinPulsador) == LOW){//Espero a que se encienda
    
  }
  estado = digitalRead(pinExterno);
  digitalWrite(pinExterno, !estado);
  
  while(digitalRead(pinPulsador) == HIGH){//Antirebote
    
  }  
}
