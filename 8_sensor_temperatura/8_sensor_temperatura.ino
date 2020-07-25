float temp;

void setup() {
  Serial.begin(9600); //9600 bits por segundos en la comunicacion
}

void loop() {
  temp = analogRead(A0);
  temp = (temp*500)/1023;
  Serial.print("TEMP:");
  Serial.print(temp);
  Serial.print(" C");
  Serial.println();
  delay(1000);
}
