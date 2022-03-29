int ledPin = 13;
int n = 0;//entero que contara el paso por la funcion loop

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);//el pin13 salida digital
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  n++;
  delay(delayVal(n));
}  
  //funcion que devuelve un valor tipo entero pasado
  int delayVal(int f){
    return f*100;
  }
