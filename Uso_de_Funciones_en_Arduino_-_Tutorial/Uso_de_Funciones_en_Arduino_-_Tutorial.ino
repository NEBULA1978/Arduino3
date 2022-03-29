int UECHO = 8;
int UTRIG = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(UECHO, INPUT);
  pinMode(UTRIG, OUTPUT);
}

void loop() {
  int divisor = 10;

  int dis = sensor(divisor);
  Serial.println(dis);

  delay(1000);
  }
  // put your main code here, to run repeatedly:
  int sensor(int valor)
  {
   digitalWrite(UTRIG, LOW);
   delayMicroseconds(2);
   digitalWrite(UTRIG, HIGH);
   delayMicroseconds(10);
   digitalWrite(UTRIG, LOW);
   int distancia = pulseIn(UECHO, HIGH);
   distancia = distancia/valor;

   return distancia;  
  }
