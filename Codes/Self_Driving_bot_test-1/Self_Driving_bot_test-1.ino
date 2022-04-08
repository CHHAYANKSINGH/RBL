void setup() 
{
    pinMode (2,INPUT);
    pinMode (3,INPUT);
    pinMode (4,INPUT);
    pinMode (5,OUTPUT);
    pinMode (6,OUTPUT);
    pinMode (7,OUTPUT);
    pinMode (8,OUTPUT);
}

// 5,6 Right wheel:
// 7,8 Left wheel:
// a=Front IR, b=Right IR, c=Left IR:

void loop() 
{
    int a=digitalRead (2);
    int b=digitalRead (3);  
    int c=digitalRead (4);

    if (a==0)
    {
        digitalWrite (5,HIGH);
        digitalWrite (6,LOW);

        digitalWrite (7,HIGH);
        digitalWrite (8,LOW);
    }

    if (a==1 && b==1)
    {
        digitalWrite (5,HIGH);
        digitalWrite (6,LOW);

        digitalWrite (7,HIGH);
        digitalWrite (8,HIGH);
    }

    if (a==1 && c==1)
    {
        digitalWrite (5,LOW);
        digitalWrite (6,LOW);

        digitalWrite (7,HIGH);
        digitalWrite (8,LOW);
    }

    if (a==1 && b==1 && c==1)
    {
        digitalWrite (5,LOW);
        digitalWrite (6,HIGH);
        delay (10000);

        digitalWrite (7,LOW);
        digitalWrite (8,HIGH);
        delay (10000);

        digitalWrite (5,HIGH);
        digitalWrite (6,HIGH);

        digitalWrite (7,HIGH);
        digitalWrite (8,LOW);
    }

    if (a==1)
    {
        digitalWrite (5,HIGH);
        digitalWrite (6,HIGH);

        digitalWrite (7,HIGH);
        digitalWrite (8,LOW);
    }

    if (a==0 && b==1 && c==0)
    {
        digitalWrite (5,HIGH);
        digitalWrite (6,LOW);

        digitalWrite (7,LOW);
        digitalWrite (8,LOW);
    }

    if (a==0 && b==0 && c==1)
    {
        digitalWrite (5,HIGH);
        digitalWrite (6,HIGH);

        digitalWrite (7,HIGH);
        digitalWrite (8,LOW);
    }
}
