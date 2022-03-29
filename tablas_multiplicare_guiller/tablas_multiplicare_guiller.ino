
int a = 1;
int b = 2;
int c = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9699);
}

void loop() {
  // put your main code here, to run repeatedly:
  a = random(1,9);

  Serial.print(a);
  Serial.print(" x ");
  Serial.print(b);
  Serial.print("= ");
 
  
  Serial.println(5);
  delay(3000);
  if(Serial.available() > 0)
  
  }
    c = Serial.read();
  }
  Serial.print(c);
  
  if(c == a*b)
  {
    Serial.println("Respuesta correcta"); 
  }
  else
  {
    Serial.println("Respuesta incorrecta");
  }    
}}
