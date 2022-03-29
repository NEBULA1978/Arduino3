int pin2 =8;
int pin3 =9;
int pin4 =10;

int ledOn = HIGH;
int ledOff = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  controlLed(pin2, ledOn);
  delay(100);
  controlLed(pin3, ledOn);
  delay(100);
  controlLed(pin4, ledOn);
  delay(100);
  controlLed(pin2, ledOff);
  delay(100);
  controlLed(pin3, ledOff);
  delay(100);
  controlLed(pin2, ledOff);
  delay(100);
  
  controlLed(pin4, ledOn);
  delay(100);
  controlLed(pin3, ledOff);
  delay(100);
  controlLed(pin2, ledOff);
  delay(100);
  controlLed(pin4, ledOff);
  delay(100);
  controlLed(pin3, ledOff);
  delay(100);
  controlLed(pin2, ledOff);
  delay(100);
}

void controlLed(int pin, int state)
{
  digitalWrite(pin, state);
}
