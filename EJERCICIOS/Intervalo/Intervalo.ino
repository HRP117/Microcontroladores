#define LED 13
#define DELAY_CAMBIO 2
#define DELAY_INVERSO 2000
#define BRILLO_MAX 255
#define INTERVALO 64

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  // Incrementa el brillo de 0 to 255
  for (int brillo = 0; brillo <= BRILLO_MAX; brillo += INTERVALO) {
    analogWrite(LED, brillo);
    delay(DELAY_CAMBIO);
  }
  delay(DELAY_INVERSO);

  // Decrementa el brillo de 255 to 0
  for (int brillo = BRILLO_MAX; brillo >= 0; brillo -= INTERVALO) {
    analogWrite(LED, brillo);
    delay(DELAY_CAMBIO);
  }
  delay(DELAY_INVERSO);

}
