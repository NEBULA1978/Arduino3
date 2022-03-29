int x = 2;
int y = 2;
int z;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  z = x + y;
  Serial.print("z = ");
  Serial.print(z);
  Serial.print("  X = ");
  Serial.print(x);
  Serial.print("  Y = ");
  Serial.print(y);
  Serial.println();
}
