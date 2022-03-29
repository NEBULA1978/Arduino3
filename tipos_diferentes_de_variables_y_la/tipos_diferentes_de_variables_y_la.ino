int value; // 'value' es visible para cualquier función
void setup()
{
   Serial.begin(9600);
// no es necesario configurar
}
void loop()
{
for (int i=0; i<=20;) // 'i' solo es visible
{ // dentro del bucle for
i++;
Serial.println(i);
}
float f; // 'f' es visible solo
//Serial.println(f);
//Serial.println(value);
} // dentro del bucle
