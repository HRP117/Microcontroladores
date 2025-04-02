#define LED 9

void setup()
{
    // Definir el pin, salida digital
    pinMode(LED, OUTPUT);
}

void loop()
{
    // 1. Encender el LED
    digitalWrite(LED, HIGH);
    // 2. Esperar medio segundo
    delay(2000);
    // 3. Apagar el LED
    digitalWrite(LED, LOW);
    // 4. Esperar medio segundo
    delay(4000);
}