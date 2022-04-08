void setup() {
  pinMode (6,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (2,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,INPUT);
}

void loop() {
  int a=digitalRead (4);
        if (a==0)
        {
            digitalWrite (6,HIGH);
            digitalWrite (9,LOW);
            digitalWrite (3,LOW);
            digitalWrite (2,HIGH);
            
         }    
         if (a==1)
         {
         digitalWrite (9,HIGH);
         digitalWrite (6,LOW);
         digitalWrite (2,HIGH);
         digitalWrite (3,LOW);
         }
         
}
