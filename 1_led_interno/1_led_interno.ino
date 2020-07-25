//LED INTERNO
int i = 1;
int un_segundo = 1000;

void setup() {
 pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay((un_segundo * i));
  digitalWrite(13, LOW);
  delay((un_segundo * i));
  i++;
}
