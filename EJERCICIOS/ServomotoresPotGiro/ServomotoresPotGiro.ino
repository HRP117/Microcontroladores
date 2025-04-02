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
    int valSensor0 = analogRead(A0);

    delay(50);

    int Angulo = map(valSensor0, 0, 1023, 0, 180);

    Servo1.write(Angulo);

    Serial.print("Angulo: ");
    Serial.print(Angulo);
    Serial.print(" | ");
    Serial.print("Valor Sensor: ");
    Serial.println(valSensor0);

    delay(50);
}
