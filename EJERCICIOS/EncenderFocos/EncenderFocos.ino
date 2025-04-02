#define LED6 6
#define LED7 7
#define LED8 8
#define LED9 9
#define DELAY 100


void setup() {
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);

}

void loop() {
  digitalWrite(LED6, HIGH);
  delay(DELAY);
  //digitalWrite(LED6, LOW);
  digitalWrite(LED7, HIGH);
  delay(DELAY);
  //digitalWrite(LED7, LOW);
  digitalWrite(LED8, HIGH);
  delay(DELAY);
  //digitalWrite(LED8, LOW);
  digitalWrite(LED9, HIGH);
  delay(DELAY);
  //digitalWrite(LED9, LOW);
}
