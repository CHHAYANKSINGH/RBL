void setup() 
{
    pinMode (0, OUTPUT);
    pinMode (1, OUTPUT);
    pinMode (13, OUTPUT);
}

void loop() 
{
    digitalWrite (0,LOW);
    digitalWrite (1,HIGH);
    digitalWrite (13,LOW);
    delay (5000);

    digitalWrite (0,HIGH);
    digitalWrite (1,LOW);
    digitalWrite (13,LOW);
    delay (5000);

    digitalWrite (0,HIGH);
    digitalWrite (1,HIGH);
    digitalWrite (13,HIGH);
    delay (5000);
}
