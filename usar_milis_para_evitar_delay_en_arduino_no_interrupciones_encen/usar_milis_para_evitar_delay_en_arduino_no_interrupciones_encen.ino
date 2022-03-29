long unsigned tiempo;//


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  tiempo=millis();//tiempo en milis desde que empezamos el programa
}

void loop() 
{
  // put your main code here, to run repeatedly:
  encender();
//  apagar();
}


void encender() {
  // put your main code here, to run repeatedly:
  if(millis() - tiempo >2000){
    digitalWrite(13,1);
    Serial.println("led encendido 2segundos");
    tiempo=millis();//para que se ponga a cero y vuelva a empezar
    Serial.println(tiempo);
   
  } else if(millis() - tiempo >2000){
    digitalWrite(13,0);
    Serial.println("led apagado 2segundos");
    tiempo=millis();//para que se ponga a cero y vuelva a empezar
    long unsigned millis=0;
    Serial.println(tiempo);
  
    }}
