void setup()
{
  pinMode (13,OUTPUT);
  pinMode (1,OUTPUT);
  pinMode (0,OUTPUT);
  pinMode (4,INPUT);
}

void loop() 
{
  int a=digitalRead (4);

   if (a==0)
   {
      digitalWrite (13,HIGH);
      digitalWrite (0,LOW);
      digitalWrite (1,LOW);
   }

    if (a==1)
    {
      digitalWrite (13,LOW);
      digitalWrite (0,HIGH);
      digitalWrite (1,HIGH);
    }
}
