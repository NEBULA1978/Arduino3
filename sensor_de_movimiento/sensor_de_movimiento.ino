//bloque1
const int trigger=8; 
const int echo=7; 
float dist;

//bloque2
const int trigger2=8; 
const int echo2=7; 
float dist2;

//bloque3
const int trigger3=8; 
const int echo3=7; 
float dist3;

//bloque4
const int trigger4=8; 
const int echo4=7; 
float dist4;

void setup(){
  //bloque1
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);

    //bloque2
  Serial.begin(9600);
  pinMode(trigger2,OUTPUT);
  pinMode(echo2,INPUT);

    //bloque3
  Serial.begin(9600);
  pinMode(trigger3,OUTPUT);
  pinMode(echo3,INPUT);

    //bloque2
  Serial.begin(9600);
  pinMode(trigger4,OUTPUT);
  pinMode(echo4,INPUT);

  
}
void loop(){
  loop1() ;
  loop2() ;
  loop3() ;
  loop4() ;            
}    


void loop1(){
  digitalWrite(trigger,LOW);
  delayMicroseconds(5);        
  digitalWrite(trigger,HIGH);  
  delayMicroseconds(10);      
  digitalWrite(trigger,LOW); 
  dist=pulseIn(echo,HIGH);      
  dist = dist/58;               // Se hace la conversión a centímetros
                                // Si quisieramos convertirlo a pulgadas, dividimos entre 148.
  Serial.print ("Distancia = ");
  Serial.print (dist);         
  Serial.print (" cm");         
  Serial.write (10);            
  delayMicroseconds(200);                
}  


void loop2(){
  digitalWrite(trigger2,LOW);
  delayMicroseconds(5);        
  digitalWrite(trigger2,HIGH);  
  delayMicroseconds(10);      
  digitalWrite(trigger2,LOW); 
  dist2=pulseIn(echo2,HIGH);      
  dist2 = dist2/58;               // Se hace la conversión a centímetros
                                // Si quisieramos convertirlo a pulgadas, dividimos entre 148.
  Serial.print ("Distancia2 = ");
  Serial.print (dist2);         
  Serial.print (" cm");         
  Serial.write (10);            
  delayMicroseconds(200);                
} 



void loop3(){
  digitalWrite(trigger3,LOW);
  delayMicroseconds(5);        
  digitalWrite(trigger3,HIGH);  
  delayMicroseconds(10);      
  digitalWrite(trigger3,LOW); 
  dist3=pulseIn(echo3,HIGH);      
  dist3 = dist3/58;               // Se hace la conversión a centímetros
                                // Si quisieramos convertirlo a pulgadas, dividimos entre 148.
  Serial.print ("Distancia3 = ");
  Serial.print (dist3);         
  Serial.print (" cm");         
  Serial.write (10);            
  delayMicroseconds(200);                
}  


void loop4(){
  digitalWrite(trigger4,LOW);
  delayMicroseconds(5);        
  digitalWrite(trigger4,HIGH);  
  delayMicroseconds(10);      
  digitalWrite(trigger4,LOW); 
  dist4=pulseIn(echo4,HIGH);      
  dist4 = dist4/58;               // Se hace la conversión a centímetros
                                // Si quisieramos convertirlo a pulgadas, dividimos entre 148.
  Serial.print ("Distancia4 = ");
  Serial.print (dist4);         
  Serial.print (" cm");         
  Serial.write (10);            
  delayMicroseconds(200);                
} 
