void setup() 
{
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() 
{
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  delay(3000);

  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  delay(2300);
}
