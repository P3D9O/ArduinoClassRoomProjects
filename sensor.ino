#include <Ultrasonic.h>
#include <LiquidCrystal.h>
#include <NewPing.h>

#define trigPin 5
#define echoPin 6
#define MAX_DISTANCE 500

NewPing sonar(trigPin, echoPin, MAX_DISTANCE);

const int green = 5;
const int red = 3;
const int orange = 4;


LiquidCrystal lcd (13,12,11,10,9,8);
Ultrasonic ultrasonic(5,6);


int distancia;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(green, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(red, OUTPUT);
  
  lcd.begin(16,2);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {

  int duration, distance;
  
  digitalWrite(trigPin, LOW);
  digitalMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  digitalMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;


  if(distance < 15){}
  else if (distance >= 15 && distance < 30){}
  else if (distance >= 30){}

    lcd.clear();

  if (distancia < 10){
    lcd.print(">>>>>");
    lcd.print(distancia);
    lcd.print("<<<<<");
    lcd.setCursor(3,1);
    lcd.print("PERTO");

  }

  if ( 15 >= distancia && 30 ) {
    lcd.print(">>>>>");
    lcd.print(distancia);
    lcd.print("<<<<<");
    lcd.setCursor(3,1);
    lcd.print("PROXIMO");

  }

  if (distancia >= 30) {
    lcd.setCursor(0,6);
    lcd.print(">>>>");
    lcd.print(distancia);
    lcd.print("<<<<");
    lcd.setCursor(3,6);
    lcd.print("abacaxi");
  }
}
