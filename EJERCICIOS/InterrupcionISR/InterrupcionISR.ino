#include <LiquidCrystal.h>

const int LED = 13;
const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;

volatile int EdoLED = 0;
volatile unsigned long contador = 0;

LiquidCrystal LCD(rs, en, d4, d5, d6, d7);

void setup()
{
    pinMode(LED, OUTPUT);

    LCD.begin(16, 2);
    LCD.setCursor(0, 0);
    LCD.print("Contador: ");

    cli();

    TCCR1A = 0;
    TCCR1B = 0;
    TCNT1 = 0;

    TCCR1B |= B00000101;
    TIMSK1 |= B00000010;

    OCR1A = 31250;

    sei();
}
void loop()
{
    digitalWrite(LED, EdoLED);

    LCD.setCursor(0, 1);
    LCD.print("                ");
    LCD.setCursor(0, 1);
    LCD.print(contador);
    LCD.print(" seg");

    delay(100);
}

ISR(TIMER1_COMPA_vect)
{
    EdoLED = !EdoLED;
    contador += 1;
}
