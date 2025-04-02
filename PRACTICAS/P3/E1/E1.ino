#include <Servo.h>

Servo Servo1;

int Servo = 9;

void setup()
{
    Serial.begin(9600);
    Servo1.attach(Servo);
    Servo1.write(0);
}

void loop()
{
    int valSensor = analogRead(A0);
    int Velocidad = map(valSensor, 0, 1023, 1, 50);

    for (int i = 0; i < 180; i++)
    {
        Servo1.write(i);
        delay(Velocidad);
        Serial.print("Angulo: ");
        Serial.println(i);
    }
    for (int i = 180; i > 0; i--)
    {
        Servo1.write(i);
        delay(Velocidad);
        Serial.print("Angulo: ");
        Serial.println(i);
    }

    Serial.print("Velocidad: ");
    Serial.println(Velocidad);
    delay(Velocidad);
}
