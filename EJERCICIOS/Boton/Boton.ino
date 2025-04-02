#define BOTON 2

void setup()
{
    pinMode(BOTON, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int edoBoton = digitalRead(BOTON);
    Serial.print(edoBoton);
    delay(1);
}
