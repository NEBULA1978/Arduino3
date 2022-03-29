int amarillo = 8;
int verde = 9;
int azul = 10;
char datos;

void setup() {
  // put your setup code here, to run once:
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    datos = Serial.read();
    if (datos == '1')
      digitalWrite(amarillo, HIGH); 
    if (datos == '2')
      digitalWrite(verde, HIGH);
    if (datos == '3')
      digitalWrite(azul, HIGH);
      if (datos == '4')
      {
       digitalWrite(amarillo, LOW);
       digitalWrite(verde, LOW);
       digitalWrite(azul, LOW); 
      }
  }
 
}
