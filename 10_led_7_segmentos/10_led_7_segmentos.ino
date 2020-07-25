#define DEBUG 1
#define VERBOSE 1
#define ERRORES 1

const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;
int contador = 0;

void setup() {
  Serial.begin(9600); //9600 bits por segundos en la comunicacion
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  escribirTodos();
  apagar();
  escribirUno();
  apagar();
  escribirDos();
  apagar();
  escribirTres();
  apagar();
  escribirCuatro();
  apagar();
  escribirCinco();
  apagar();
  escribirSeis();
  apagar();
  escribirSiete();
  apagar();
  escribirOcho();
  apagar();
  escribirNueve();
  apagar();
}

void apagar(){
  delay(1000);  
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);  
  delay(1000);
}

void escribirTodos(){
  escribirSegmento(a);
  escribirSegmento(b);
  escribirSegmento(c);
  escribirSegmento(d);
  escribirSegmento(e);
  escribirSegmento(f);
  escribirSegmento(g);
}

void escribirUno() {
  escribirSegmento(b);
  escribirSegmento(c);
}

void escribirDos() {
  escribirSegmento(a);
  escribirSegmento(b);
  escribirSegmento(d);
  escribirSegmento(e);
  escribirSegmento(g);
}

void escribirTres(){
  escribirSegmento(a);
  escribirSegmento(b);
  escribirSegmento(c);
  escribirSegmento(d);
  escribirSegmento(g);
}

void escribirCuatro(){
  escribirSegmento(b);
  escribirSegmento(c);
  escribirSegmento(g);
  escribirSegmento(f);
}

void escribirCinco(){
  escribirSegmento(a);
  escribirSegmento(f);
  escribirSegmento(g);
  escribirSegmento(c);
  escribirSegmento(d);
}

void escribirSeis(){
  escribirSegmento(f);
  escribirSegmento(e);
  escribirSegmento(d);
  escribirSegmento(c);
  escribirSegmento(g);
}

void escribirSiete(){
  escribirSegmento(a);
  escribirSegmento(b);
  escribirSegmento(c);
}

void escribirOcho(){
  escribirSegmento(a);
  escribirSegmento(b);
  escribirSegmento(c);
  escribirSegmento(d);
  escribirSegmento(e);
  escribirSegmento(f);
  escribirSegmento(g);
}

void escribirNueve(){
  escribirSegmento(a);
  escribirSegmento(b);
  escribirSegmento(c);
  escribirSegmento(g);
  escribirSegmento(f);
}

void escribirSegmento(int p_seg){
  digitalWrite(p_seg, HIGH);
}
