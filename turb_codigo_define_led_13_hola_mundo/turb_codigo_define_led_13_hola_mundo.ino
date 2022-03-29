#define PIN_LED 10// donde encuentre PIN_LED pone 10
#define PIN_LED1 9
#define PIN_LED2 8

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED, HIGH);
  delay(200);
    digitalWrite(PIN_LED, LOW);
  delay(200);
    digitalWrite(PIN_LED1, HIGH);
  delay(200);
    digitalWrite(PIN_LED1, LOW);
  delay(200);
    digitalWrite(PIN_LED2, HIGH);
  delay(200);
    digitalWrite(PIN_LED2, LOW);
  delay(200);
}
