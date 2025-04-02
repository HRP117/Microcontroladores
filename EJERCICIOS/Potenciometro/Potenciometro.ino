void setup()
{
    Serial.begin(9600);
}
void loop()
{
    int valSensor = analogRead(A0);
    float voltaje = (valSensor / 1023.0) * 5.0;
    delay(1000);
    Serial.print("Valor del sensor: ");
    Serial.println(valSensor);
    delay(1000);
    Serial.print("Valor del voltaje: ");
    Serial.println(voltaje);
    delay(1000);
}
