#include<SoftwareSerial.h>
#define m11 3
#define m12 5
#define m21 6
#define m22 9
int led=7;

void bonus()
{
  digitalWrite(led,HIGH); 
  delay(500);
  digitalWrite(led,LOW);
}
void forward()
{
  analogWrite(m11, 200);
  analogWrite(m12, 0);
  analogWrite(m21, 255);
  analogWrite(m22, 0);
}

void right()
{
  analogWrite(m11, 0);
  analogWrite(m12, 255);
  analogWrite(m21, 255);
  analogWrite(m22, 0);
}

void backward()
{
  analogWrite(m11, 0);
  analogWrite(m12, 200);
  analogWrite(m21, 0);
  analogWrite(m22, 255);
}

void left()
{
  analogWrite(m11, 255);
  analogWrite(m12, 0);
  analogWrite(m21, 0);
  analogWrite(m22, 255);
}

void Stop()
{
  analogWrite(m11, 0);
  analogWrite(m12, 0);
  analogWrite(m21, 0);
  analogWrite(m22, 0);
}

void setup() 
{
  //bt.begin(9600); /* Define baud rate for software serial communication */
  Serial.begin(9600); /* Define baud rate for serial communication */
  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);
  pinMode(m22, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(2, OUTPUT);
  digitalWrite(2,LOW);
}

void loop() {
  
    while (Serial.available()) /* If data is available on serial port */
    {
      char data = Serial.read();
      switch(data)
    {
    case 'F':
    
      Serial.println("Forward");
      forward();
      break;

    case 'L':
    
      Serial.println("Left");
      left();
      break;

    case 'R':
      Serial.println("Right");
      right();
      break;

    case 'B':
      Serial.println("Backward");
      backward();
      break;

    case 'S':
      Serial.println("Stop");
      Stop();
      break; 

    case 'A':
      Serial.println("Bonus");
      bonus();
      break;
    }

    }
}
