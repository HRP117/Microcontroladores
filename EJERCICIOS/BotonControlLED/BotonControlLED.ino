#define BOTON 2
#define LED 13

int contador = 0;
int edoBotUltimo = LOW;

void setup()
{
    pinMode(BOTON, INPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    edoBotActual = digitalRead(BOTON);
    // Prender LED
    if (edoBotActual == HIGH && edoBotUltimo == LOW)
    {
        digitalWrite(LED, HIGH);
    }
    // Contador
    if (edoBotActual == LOW && edoBotUltimo == HIGH)
    {
        delay(50);
        if (digitalRead(BOTON) == LOW)
        {
            contador++;
            Serial.print("Lo has presionado: ");
            Serial.print(contador);
            Serial.println(" veces");
        }
    }

    edoBotUltimo = edoBotActual;
    delay(10);
}
