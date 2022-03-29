#define INTERVALO_MENSAJE1 5000
#define INTERVALO_MENSAJE2 7000
#define INTERVALO_MENSAJE3 11000
#define INTERVALO_MENSAJE4 13000
 
unsigned long tiempo_1 = 0;
unsigned long tiempo_2 = 0;
unsigned long tiempo_3 = 0;
unsigned long tiempo_4 = 0;

int led =2;
int led2 =3;
int led3 =4;
 
void print_tiempo(unsigned long tiempo_millis);
 
void setup() {
    Serial.begin(9600);
    pinMode(led, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    
}
 
void loop() {
    if(millis() > tiempo_1 + INTERVALO_MENSAJE1){
        tiempo_1 = millis();
        print_tiempo(tiempo_1);
        Serial.println("Soy el mensaje 1");
        digitalWrite(led, HIGH);
    }
   
    if(millis() > tiempo_2 + INTERVALO_MENSAJE2){
        tiempo_2 = millis();
        print_tiempo(tiempo_2);
        Serial.println("Soy el mensaje 2");
        digitalWrite(led2, HIGH);
    }
   
    if(millis() > tiempo_3 + INTERVALO_MENSAJE3){
        tiempo_3 = millis();
        print_tiempo(tiempo_3);
        Serial.println("Soy el mensaje 3");
        digitalWrite(led3, HIGH);
    }
   
    if(millis() > tiempo_4 + INTERVALO_MENSAJE4){
        tiempo_4 = millis();
        print_tiempo(tiempo_4);
        Serial.println("Soy el mensaje 4");
    }
    digitalWrite(led, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
}
 
void print_tiempo(unsigned long tiempo_millis){
    Serial.print("Tiempo: ");
    Serial.print(tiempo_millis/1000);
    Serial.print("s - ");
}
void print_tiempo4(unsigned long tiempo_millis4){   
    if(millis() > tiempo_4 + INTERVALO_MENSAJE4){
        tiempo_4 = millis();
        print_tiempo(tiempo_4);
        Serial.println("Soy el mensaje 4");
    }
    digitalWrite(led, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
}
 
void print_tiempo5(unsigned long tiempo_millis5){
    Serial.print("Tiempo: ");
    Serial.print(tiempo_millis5/1000);
    Serial.print("s - ");
}
