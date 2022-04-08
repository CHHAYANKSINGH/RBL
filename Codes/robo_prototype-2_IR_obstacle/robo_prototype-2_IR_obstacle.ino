void setup() \
{
  pinMode (6,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (2,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,INPUT);
  pinMode (5,INPUT);
}

void loop() 
{
    int a=digitalRead (4);
    int b=digitalRead (5);
        if (a==0&&b==0)
        {
            digitalWrite (9,HIGH);
            digitalWrite (6,LOW);
            digitalWrite (2,HIGH);
            digitalWrite (3,LOW);
        }    
         if (a==1&&b==1)
         {
         digitalWrite (9,HIGH);
         digitalWrite (6,LOW);
         digitalWrite (2,HIGH);
         digitalWrite (3,LOW);
         }     

         if (a==1&&b==0)
         {
            digitalWrite (9,HIGH);
            digitalWrite (6,LOW);
            digitalWrite (3,LOW);
            digitalWrite (2,LOW);
         }

         if (a==0&&b==1)
         {
             digitalWrite (9,LOW);
             digitalWrite (6,LOW);
             digitalWrite (2,HIGH);
             digitalWrite (3,LOW);
         }

}
