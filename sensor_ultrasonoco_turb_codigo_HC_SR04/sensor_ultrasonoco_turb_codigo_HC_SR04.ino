#define PIN_TRIG 2
#define PIN_ECHO 3

float tiempo;
float distancia;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(4);

  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);
  
  tiempo = pulseIn(PIN_ECHO, HIGH);
  distancia = tiempo/58.3;

  Serial.println(distancia);

  delay(1000);
}
