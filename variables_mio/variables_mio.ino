int salidaLed = 13;  //-32768  + 32767
int contador = 0;//contador3;
//unsigned int salidaLed2 = 13; // 0 65535

//long pepito = 9; //-2,147,483,648 a 2,147,483,647
//unsigned long asd;

//float lecturaSensorAnalogico = 0; //-3.4028235E+38  +3.4028235E+38.
//float resultadoDivision;
//double superGrandeDecimales;

//byte miniContador;  //0 255
//boolean ONOFF; // 0 1


void setup()
{
  
  pinMode(salidaLed,OUTPUT); //INPUT
  Serial.begin(9600);//115200
}
void loop()
{
  
  digitalWrite(salidaLed,HIGH);
  Serial.println("led encendido!!");
  delay(2000); // siempre es en milisegundos
  digitalWrite(salidaLed,LOW);
  Serial.println("led apagado :(");
  
  contador = contador + 1;
  Serial.print("Contador: ");
  Serial.println(contador);
  delay(2000);
 
}
