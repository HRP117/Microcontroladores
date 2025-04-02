#define LEDR 7
#define LEDG 8
#define LEDB 9

void setup()
{
    Serial.begin(9600);
    pinMode(LEDR, OUTPUT);
    pinMode(LEDG, OUTPUT);
    pinMode(LEDB, OUTPUT);
}
void loop()
{
    int valSensor = analogRead(A0);
    if (valSensor <= 340 && valSensor >= 0)
    {
        float intensidad = (valSensor / 340.0) * 255.0;
        analogWrite(LEDR, 255 - intensidad);
        analogWrite(LEDG, intensidad);
        analogWrite(LEDB, 0);
        Serial.print("Valor del sensor: ");
        Serial.println(valSensor);
        Serial.print("Valor de la intensidadR: ");
        Serial.println(255 - intensidad);
        Serial.print("Valor de la intensidadG: ");
        Serial.println(intensidad);
        Serial.print("Valor de la intensidadB: ");
        Serial.println(0);
        delay(1000);
    }
    if (valSensor <= 680 && valSensor > 340)
    {
        float intensidad = ((valSensor - 341.0) / 339.0) * 255.0;
        analogWrite(LEDR, 0);
        analogWrite(LEDG, 255 - intensidad);
        analogWrite(LEDB, intensidad);
        Serial.print("Valor del sensor: ");
        Serial.println(valSensor);
        Serial.print("Valor de la intensidadR: ");
        Serial.println(0);
        Serial.print("Valor de la intensidadG: ");
        Serial.println(255 - intensidad);
        Serial.print("Valor de la intensidadB: ");
        Serial.println(intensidad);
        delay(1000);
    }
    if (valSensor > 680)
    {
        float intensidad = ((valSensor - 681.0) / 342.0) * 255.0;
        analogWrite(LEDR, intensidad);
        analogWrite(LEDG, 0);
        analogWrite(LEDB, 255 - intensidad);
        Serial.print("Valor del sensor: ");
        Serial.println(valSensor);
        Serial.print("Valor de la intensidadR: ");
        Serial.println(intensidad);
        Serial.print("Valor de la intensidadG: ");
        Serial.println(0);
        Serial.print("Valor de la intensidadB: ");
        Serial.println(255 - intensidad);
        delay(1000);
    }
}
