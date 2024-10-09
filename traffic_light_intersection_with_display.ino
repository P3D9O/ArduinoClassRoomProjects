 // dando um nome para as portas
#include <LiquidCrystal.h>

LiquidCrystal lcd (0,1,2,3,4,5);
int vermelho = 11;
int amarelo = 12;
int verde = 13;

int verm2 = 10;
int verd2 = 8;
int amrl2 = 9;

void setup(){

  lcd.begin(16,2);

  pinMode(vermelho, OUTPUT); 
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);

  pinMode(verm2, OUTPUT);
  pinMode(verd2, OUTPUT);
  pinMode(amrl2, OUTPUT);


}


void loop(){

  lcd.clear();


  digitalWrite(vermelho, LOW);
  digitalWrite(amrl2, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(verm2, HIGH); 
  lcd.setCursor(0,0);
  lcd.print("Atravessar - Atravessar - Atravessar - ");
  for (int i = 0; i < 60; i++){
    lcd.scrollDisplayRight();
  delay(300);
  }

  lcd.clear();

  
  for(int i = 0; i < 5; i++){

 digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  delay(1000);

  
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(1000);
  } 

  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  digitalWrite(verd2, HIGH);
  digitalWrite(verm2, LOW);
  lcd.setCursor(0,0);
  lcd.print("Pare - Pare - Pare - Pare");
  lcd.setCursor(1,1);
  lcd.print("Atravessar - Atravessar - Atravessar - ");
  for (int i = 0; i < 60; i++){
    lcd.scrollDisplayLeft();
  delay(300);
  }
  delay(5000);
  lcd.clear();



  for(int i = 0; i < 5; i++){

  digitalWrite(amrl2, LOW);
  digitalWrite(verde, LOW);
  delay(1000);

  
  digitalWrite(amrl2, HIGH);
  digitalWrite(verde, LOW);
  delay(1000);
  } 

}
