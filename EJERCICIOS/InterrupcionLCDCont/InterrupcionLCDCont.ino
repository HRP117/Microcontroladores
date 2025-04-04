#include <LiquidCrystal.h>
const int LED = 13;
const int BOTON = 2;
volatile int EdoLED = 0;
const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal LCD(rs, en, d4, d5, d6, d7);
int contador = 0;

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(BOTON, INPUT);
    attachInterrupt(digitalPinToInterrupt(BOTON), ISRLED, RISING);
    LCD.begin(16, 2);
    LCD.setCursor(0, 0);
    LCD.clear();
}
void loop()
{
    digitalWrite(LED, EdoLED);
    delay(10);

    contador++;
    delay(1000);
    LCD.clear();
    // LCD.autoscroll();
    LCD.print(contador);
    LCD.print(" segundos");
}
void ISRLED()
{
    EdoLED = !EdoLED;
}
