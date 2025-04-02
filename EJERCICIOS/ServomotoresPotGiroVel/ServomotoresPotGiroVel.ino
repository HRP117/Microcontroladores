#include <Servo.h>

Servo Servo1;

int Angulo = 0;
int Veocidad = 0;
int Servo = 9;

void setup()
{
    Serial.begin(9600);
    Servo1.attach(Servo);
    Servo1.write(Angulo);
}

void loop()
{
    int valSensor0 = analogRead(A0);

    int valSensor1 = analogRead(A1);

    delay(50);

    int Angulo = map(valSensor0, 0, 1023, 0, 180);

    int Velocidad = map(valSensor1, 0, 1023, 500, 5000);

    Servo1.write(Angulo);

    Servo1.write(Velocidad);

    delay(50);
}
