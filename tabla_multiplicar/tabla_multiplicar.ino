int v1;
int v2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  v1 = 1;
}

void loop() {
  // put your main code here, to run repeatedly:
  for( v2 = 1; v2 <= 10 ; v2++){
    Serial.print(v1);
    Serial.print(" x ");
    Serial.print(v2);
    Serial.print(" = ");
    Serial.println(v1*v2);
    delay(500);
  }
  v1++;
}
