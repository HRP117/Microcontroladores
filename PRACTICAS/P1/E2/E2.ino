#define LED2 2
#define LED3 3
#define LED4 4
#define LED5 5
#define LED6 6
#define LED7 7
#define LED8 8
#define DELAY 100


void setup() {
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    pinMode(LED5, OUTPUT);
    pinMode(LED6, OUTPUT);
    pinMode(LED7, OUTPUT);
    pinMode(LED8, OUTPUT);
  }

void loop() {
    // a)
    digitalWrite(LED2, HIGH);
    delay(DELAY);
    //digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    delay(DELAY);
    //digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH);
    delay(DELAY);
    //digitalWrite(LED4, LOW);
    digitalWrite(LED5, HIGH);
    delay(DELAY);
    //digitalWrite(LED5, LOW);
    digitalWrite(LED6, HIGH);
    delay(DELAY);
    //digitalWrite(LED6, LOW);
    digitalWrite(LED7, HIGH);
    delay(DELAY);
    //digitalWrite(LED7, LOW);
    digitalWrite(LED8, HIGH);
    delay(DELAY);
    //digitalWrite(LED8, LOW);

    //c)
    //digitalWrite(LED2, HIGH);
    delay(DELAY);
    digitalWrite(LED2, LOW);
    //digitalWrite(LED3, HIGH);
    delay(DELAY);
    digitalWrite(LED3, LOW);
    //digitalWrite(LED4, HIGH);
    delay(DELAY);
    digitalWrite(LED4, LOW);
    //digitalWrite(LED5, HIGH);
    delay(DELAY);
    digitalWrite(LED5, LOW);
    //digitalWrite(LED6, HIGH);
    delay(DELAY);
    digitalWrite(LED6, LOW);
    //digitalWrite(LED7, HIGH);
    delay(DELAY);
    digitalWrite(LED7, LOW);
    //digitalWrite(LED8, HIGH);
    delay(DELAY);
    digitalWrite(LED8, LOW);
    delay(DELAY);

    // d)
    digitalWrite(LED8, HIGH);
    delay(DELAY);
    //digitalWrite(LED2, LOW);
    digitalWrite(LED7, HIGH);
    delay(DELAY);
    //digitalWrite(LED3, LOW);
    digitalWrite(LED6, HIGH);
    delay(DELAY);
    //digitalWrite(LED4, LOW);
    digitalWrite(LED5, HIGH);
    delay(DELAY);
    //digitalWrite(LED5, LOW);
    digitalWrite(LED4, HIGH);
    delay(DELAY);
    //digitalWrite(LED6, LOW);
    digitalWrite(LED3, HIGH);
    delay(DELAY);
    //digitalWrite(LED7, LOW);
    digitalWrite(LED2, HIGH);
    delay(DELAY);
    //digitalWrite(LED8, LOW);

    //b)
    //digitalWrite(LED2, HIGH);
    delay(DELAY);
    digitalWrite(LED8, LOW);
    //digitalWrite(LED3, HIGH);
    delay(DELAY);
    digitalWrite(LED7, LOW);
    //digitalWrite(LED4, HIGH);
    delay(DELAY);
    digitalWrite(LED6, LOW);
    //digitalWrite(LED5, HIGH);
    delay(DELAY);
    digitalWrite(LED5, LOW);
    //digitalWrite(LED6, HIGH);
    delay(DELAY);
    digitalWrite(LED4, LOW);
    //digitalWrite(LED7, HIGH);
    delay(DELAY);
    digitalWrite(LED3, LOW);
    //digitalWrite(LED8, HIGH);
    delay(DELAY);
    digitalWrite(LED2, LOW);
    delay(DELAY);

    

}
