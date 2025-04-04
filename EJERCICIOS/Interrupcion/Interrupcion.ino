const int LED = 13;
const int Boton = 2;
volatile int estado = 0;
void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(Boton, INPUT);
    attachInterrupt(digitalPinToInterrupt(Boton), ISRLED, RISING);
}
void loop()
{
    digitalWrite(LED, estado);
    delay(1000);
}
void ISRLED()
{
    estado = !estado;
}