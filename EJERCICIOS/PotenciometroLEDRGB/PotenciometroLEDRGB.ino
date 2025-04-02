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
    int valSensor0 = analogRead(A0);
    int valSensor1 = analogRead(A1);
    int valSensor2 = analogRead(A2);

    int intensidadR = map(valSensor0, 0, 1023, 0, 255);
    int intensidadG = map(valSensor1, 0, 1023, 0, 255);
    int intensidadB = map(valSensor2, 0, 1023, 0, 255);

    analogWrite(LEDR, intensidadR);
    analogWrite(LEDG, intensidadG);
    analogWrite(LEDB, intensidadB);

    Serial.println("Valor Sensor 0: " + String(valSensor0));
    Serial.println("Valor Sensor 1: " + String(valSensor1));
    Serial.println("Valor Sensor 2: " + String(valSensor2));
    Serial.println("Intensidad R: " + String(intensidadR));
    Serial.println("Intensidad G: " + String(intensidadG));
    Serial.println("Intensidad B: " + String(intensidadB));
    Serial.println("--------------------------------------");

    delay(1000);
}
