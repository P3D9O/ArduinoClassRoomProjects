//Semafaro com display

int vermelho = 13;
int amarelo = 12;
int verde = 11;

int a = 4;
int b = 5;
int c = 8;
int d = 9;
int e = 10;
int f = 3;
int g = 2;

int numeros[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup(){
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);


}

void loop(){

  
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  for (int i = 9; i >= 0; i--) {
    mostrarNumero(i);
    delay(1000); 
  }
  digitalWrite(verde, LOW);

  
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  delay(1000);


  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  for (int i = 9; i >= 0; i--) {
    mostrarNumero(i);
    delay(1000);
  } 
  digitalWrite(vermelho, LOW);

}

void mostrarNumero(int num) {
  digitalWrite(a, numeros[num][0]);
  digitalWrite(b, numeros[num][1]);
  digitalWrite(c, numeros[num][2]);
  digitalWrite(d, numeros[num][3]);
  digitalWrite(e, numeros[num][4]);
  digitalWrite(f, numeros[num][5]);
  digitalWrite(g, numeros[num][6]);
}