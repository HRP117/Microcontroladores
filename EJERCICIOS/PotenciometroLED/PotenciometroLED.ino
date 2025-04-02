#define LED 9

void setup()
{
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
}
void loop()
{
    int valSensor = analogRead(A0);
    // Relaciona entrada con salida
    int intensidad = map(valSensor, 0, 1023, 0, 255);
    float voltaje = (valSensor / intensidad) * 5.0;

    delay(100);
    // Serial monitor
    Serial.print("Valor del sensor: ");
    Serial.println(valSensor);
    Serial.print("Valor del voltaje: ");
    Serial.println(voltaje);
    Serial.print("Valor de la intensidad: ");
    Serial.println(intensidad);
    delay(100);
    analogWrite(LED, intensidad);
}
