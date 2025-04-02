#define LEDR 9
#define LEDG 8
#define LEDB 7
int intensidadR = 0;
int intensidadG = 0;
int intensidadB = 0;

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

    if (valSensor >= 0 && valSensor <= 340)
    {
        int intensidad = map(valSensor, 0, 340, 0, 255);
        intensidadR = 255 - intensidad;
        intensidadG = intensidad;
        intensidadB = 0;
    }
    else if (valSensor > 340 && valSensor <= 680)
    {
        int intensidad = map(valSensor, 341, 680, 0, 255);
        intensidadR = 0;
        intensidadG = 255 - intensidad;
        intensidadB = intensidad;
    }
    else
    {
        int intensidad = map(valSensor, 681, 1023, 0, 255);
        intensidadR = intensidad;
        intensidadG = 0;
        intensidadB = 255 - intensidad;
    }

    analogWrite(LEDR, intensidadR);
    analogWrite(LEDG, intensidadG);
    analogWrite(LEDB, intensidadB);

    Serial.print("Valor del sensor: ");
    Serial.println(valSensor);
    Serial.print("R: ");
    Serial.print(intensidadR);
    Serial.print(" | G: ");
    Serial.print(intensidadG);
    Serial.print(" | B: ");
    Serial.println(intensidadB);

    delay(1000);
}
