#define BOTON 2

int contador = 0;
int edoBotUltimo = LOW;
bool edoBotPres = false;

void setup()
{
    pinMode(BOTON, INPUT);
    Serial.begin(9600);
}

void loop()
{
    edoBotActual = digitalRead(BOTON);

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
