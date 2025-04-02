#define LED6 6
#define LED7 7
#define LED8 8
#define LED9 9
#define DELAY 1000
#define DELAY_CAMBIO 50
#define BRILLO_MAX 255
#define INTERVALO 5
#define DELAY_INVERSO 2000



void setup() {
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
}

void loop() {
  //Enciende
  digitalWrite(LED6, HIGH);
  delay(DELAY);
  digitalWrite(LED7, HIGH);
  delay(DELAY);
  digitalWrite(LED8, HIGH);
  delay(DELAY);
  digitalWrite(LED9, HIGH);
  delay(DELAY);
  digitalWrite(LED6, HIGH);
  delay(DELAY);
  //Apaga
  digitalWrite(LED6, LOW);
  delay(DELAY);
  digitalWrite(LED7, LOW);
  delay(DELAY);
  digitalWrite(LED8, LOW);
  delay(DELAY);
  digitalWrite(LED9, LOW);
  //Brillo
  // Incrementa el brillo de 0 to 255
  for (int brillo = 0; brillo <= BRILLO_MAX; brillo += INTERVALO) {
    analogWrite(LED6, brillo);
    delay(DELAY_CAMBIO);
    analogWrite(LED7, brillo);
    delay(DELAY_CAMBIO);
    analogWrite(LED8, brillo);
    delay(DELAY_CAMBIO);
    analogWrite(LED9, brillo);
    delay(DELAY_CAMBIO);
    digitalWrite(LED6, LOW);
    delay(DELAY_CAMBIO);
    digitalWrite(LED7, LOW);
    delay(DELAY_CAMBIO);
    digitalWrite(LED8, LOW);
    delay(DELAY_CAMBIO);
    digitalWrite(LED9, LOW);
  }
  delay(DELAY_INVERSO);

  // Decrementa el brillo de 255 to 0
  for (int brillo = BRILLO_MAX; brillo >= 0; brillo -= INTERVALO) {
    analogWrite(LED6, brillo);
    delay(DELAY_CAMBIO);
    analogWrite(LED7, brillo);
    delay(DELAY_CAMBIO);
    analogWrite(LED8, brillo);
    delay(DELAY_CAMBIO);
    analogWrite(LED9, brillo);
    delay(DELAY_CAMBIO);
    digitalWrite(LED6, LOW);
    delay(DELAY_CAMBIO);
    digitalWrite(LED7, LOW);
    delay(DELAY_CAMBIO);
    digitalWrite(LED8, LOW);
    delay(DELAY_CAMBIO);
    digitalWrite(LED9, LOW);
  }
  delay(DELAY_INVERSO);

}
