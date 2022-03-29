int periodo = 3000;
int periodo1 = 6000;
int periodo2 = 9000;
unsigned long TiempoAhora = 0;
unsigned long TiempoAhora1 = 0;
unsigned long TiempoAhora2 = 0;
int Pin =13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  loop1();
  loop2();
  loop3();
}

void loop1() {
  // put your main code here, to run repeatedly:
  if(millis() > TiempoAhora + periodo){
    TiempoAhora = millis();
    Serial.println("Hola"); 
  }
}  
void loop2(){  
  if(millis() > TiempoAhora1 + periodo1){
    TiempoAhora = millis();
    digitalWrite(13, HIGH);
    Serial.println("led encendido"); 
  }
}
void loop3(){  
    if(millis() > TiempoAhora2 + periodo2){
    TiempoAhora = millis();
    digitalWrite(13, LOW);
    Serial.println("led apagado"); 
  }
  //aqui corre codigo
}
