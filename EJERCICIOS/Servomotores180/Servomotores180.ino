#include <Servo.h>

Servo Servo1;

int Angulo = 0;
int Servo = 9;

void setup()
{
    Serial.begin(9600);
    Servo1.attach(Servo);
    Servo1.write(Angulo);
}

void loop()
{
    Angulo += 180;

    if (Angulo > 180)
    {
        Angulo = 0;
    }

    Servo1.write(Angulo);
    Serial.print("Angulo: ");
    Serial.println(Angulo);
    delay(1000);
}
