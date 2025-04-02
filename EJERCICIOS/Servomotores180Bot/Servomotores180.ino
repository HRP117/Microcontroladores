#include <Servo1.h>

Servo Servo1;

int Angulo = 0;
int Servo = 9;
int Boton = 2;
int edoBotUltimo = HIGH;

void setup()
{
    Serial.begin(9600);
    Servo1.attach(Servo);
    pinMode(Boton, INPUT);
    Servo1.write(Angulo);
}

void loop()
{
    int edoBotAct = digitalRead(Boton);

    if (edoBotAct == LOW && edoBotUltimo == HIGH)
    {
        delay(50);

        Angulo += 180;

        if (Angulo > 180)
        {
            Angulo = 0;
        }

        Servo1.write(Angulo);
        delay(50);
    }

    edoBotUltimo = edoBotAct;
}
