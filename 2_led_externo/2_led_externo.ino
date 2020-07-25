//LED EXTERNO
const int led_pin = 9;
int i = 1;
int un_seg = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}

void loop() {
  digitalWrite(led_pin, HIGH);
  delay((un_seg * i));
  digitalWrite(led_pin, LOW);
  delay((un_seg * i));
  i++;
}
