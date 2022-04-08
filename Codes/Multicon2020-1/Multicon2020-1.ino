void setup() 
{
    pinMode (1,OUTPUT);
    pinMode (13,OUTPUT);
    Serial.begin (9600);
}

void loop() 
{
    
    while (Serial.available()==0);
    char a=Serial.read();
    
    if (a=="F")
    {
        digitalWrite (13,HIGH);
        digitalWrite (1,LOW);
    }

    if (a=="B")
    {
          digitalWrite (13,LOW);
          digitalWrite (1,HIGH);
    }
    
}
