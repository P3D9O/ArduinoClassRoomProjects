#include <Ultrasonic.h>
#include <LiquidCrystal.h>
#include <NewPing.h>

#define trigPin 18
#define echoPin 19
#define MAX_DISTANCE 500

NewPing sonar(trigPin, echoPin, MAX_DISTANCE);


int estadoBotao;
 int green = 5;
 int red = 7;
 int orange = 6;

 const int botaoPin = 2;


LiquidCrystal lcd (13,12,11,10,9,8);
Ultrasonic ultrasonic(5,6);


int distancia;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(green, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(red, OUTPUT);
  
  lcd.begin(16,2);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  estadoBotao = digitalRead(botaoPin);

    int duration, distance;
    
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = (duration/2) / 29.1;

if (estadoBotao == HIGH) {
    if(distance < 5){
      lcd.clear();
            digitalWrite(orange, HIGH);
            digitalWrite(red, LOW);
            digitalWrite(green, LOW);
            lcd.setCursor(5, 0);
            lcd.print("Perto");


    }
    else if (distance >= 15 && distance < 30){
      lcd.clear();
        digitalWrite(orange, LOW);
        digitalWrite(red, HIGH);
        digitalWrite(green, LOW);
            lcd.setCursor(5, 0);
            lcd.print("Proximo");
    }
    else if (distance >= 30){
      lcd.clear();
      digitalWrite(red, LOW);
        digitalWrite(green, HIGH);
            lcd.setCursor(5, 0);
            lcd.print("Longe");


    }
  } 
}
