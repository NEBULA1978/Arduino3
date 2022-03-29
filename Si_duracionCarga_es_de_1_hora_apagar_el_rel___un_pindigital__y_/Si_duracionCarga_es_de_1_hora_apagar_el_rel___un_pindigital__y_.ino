/*
En los ejemplos está BlinkWithoutDelayque hace parpadear un led, con el mismo tiempo de ON y de OFF.

Se puede modificar fácilmente para que hayan diferentes tiempos de ON y de OFF.

En el ejemplo se comprueba if(currentMillis - previousMillis > interval)

Ahora hay que diferenciar si tenemos el led apagado o encendido y comparar con el tiempo de cada uno de ellos.

El código resultante es:*/
const int ledPin =  8;      // the number of the LED pin

int ledState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated

long intervalOn = 2000;           // medio segundo  ON
long intervalOff = 500;         // cinco segundos OFF
void setup() {
  
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);     
}

void loop()
{
  unsigned long currentMillis = millis();
  if (ledState == LOW) {
    if(currentMillis - previousMillis > intervalOff) {
            previousMillis = currentMillis;
            Serial.println(currentMillis);   
            ledState = HIGH;
            Serial.println(HIGH);
    }
 } else {
    if(currentMillis - previousMillis > intervalOn) {
           previousMillis = currentMillis;   
          ledState = LOW;
          Serial.println(LOW);
    }
 }
 digitalWrite(ledPin, ledState);
// Serial.println(ledPin); 
}
