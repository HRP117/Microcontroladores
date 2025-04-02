#include <LiquidCrystal.h>

const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
// Seleccionamos los pines que usaremos
LiquidCrystal LCD(rs, en, d4, d5, d6, d7);
// rs

void setup()
{
    LCD.begin(16, 2);    // Dimension de la pantalla en columnas y renglones
    LCD.setCursor(0, 0); // Posiciona el cursor en la columna 0 y renglon 0
    LCD.clear();
}

void loop()
{
    LCD.autoscroll();
    LCD.print("One Ring to rule them all, One Ring to find them, One Ring to bring them all, and in the darkness bind them");
    delay(500);
}
