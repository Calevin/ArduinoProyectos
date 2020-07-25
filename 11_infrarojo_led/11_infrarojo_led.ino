#include <IRremote.h>
//#include <ir_Lego_PF_BitStreamEncoder.h>
int receptor = 11;
int ledInterno = 13;
IRrecv irrecv(receptor);
decode_results codigo;

void setup() {
  Serial.begin(9600); //9600 bits por segundos en la comunicacion
  irrecv.enableIRIn(); //Inicia recepcion
  pinMode(ledInterno, OUTPUT);
}

void loop() {
  Serial.println("en el loop");
  
  if (irrecv.decode(&codigo)) {
    Serial.println(codigo.value, HEX);

    delay(1000);
    irrecv.resume();
  }


}
