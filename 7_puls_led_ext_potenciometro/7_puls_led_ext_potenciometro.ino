//PULSADOR + LED INTERNO + POTENCIOMETRO
#define DEBUG 1
#define VERBOSE 1

int pinExterno = 3;
int pinPulsador = 2;
int estado = LOW;
int brillo;
int potenciometro = 0;

void setup() {
  Serial.begin(9600); //9600 bits por segundos en la comunicacion
  pinMode(pinPulsador, INPUT);
  pinMode(pinExterno, OUTPUT);
}

void loop() {
  while(digitalRead(pinPulsador) == LOW){//Espero a que se encienda
    
  }
  estado = digitalRead(pinExterno);
  Serial.println("ESTADO:");
  Serial.println(estado);
  
  Serial.println("SE MODIFICA EL ESTADO:");
  digitalWrite(pinExterno, !estado);
  
  Serial.println("POTENCIOMETRO:");
  Serial.println(analogRead(potenciometro));
  
  brillo = analogRead(potenciometro)/4;
  Serial.println("SE ASIGNARA BRILLO:");
  Serial.println(brillo);
  analogWrite(pinExterno, brillo);
    
  while(digitalRead(pinPulsador) == HIGH){//Antirebote
    
  }  
}
