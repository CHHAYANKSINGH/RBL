void setup() 
{
  pinMode (6,OUTPUT); 
  pinMode (9,OUTPUT);
  pinMode (13,OUTPUT);
  pinMode (1,OUTPUT);
  pinMode (0,OUTPUT);
  pinMode (4,INPUT);
  
}

void loop() 
{
  digitalWrite (6,HIGH);
  digitalWrite (9,LOW);
  delay (5000);
 
  digitalWrite (6,LOW);
  digitalWrite (9,HIGH);
  delay (5000);

  digitalWrite (6,LOW);
  digitalWrite (9,LOW);
  delay (5000);

  int a=digitalRead (4);

   if (a==0)
   {
      digitalWrite (13,HIGH);
      digitalWrite (0,LOW);
      digitalWrite (1,LOW);
      digitalWrite ()
   }

    if (a==1)
    {
      digitalWrite (13,LOW);
      digitalWrite (0,HIGH);
      digitalWrite (1,HIGH);
    }

}
