#define LED_A 3
#define LED_B 4
#define LED_C 5
#define BOTON 6
#define LED_D 7
#define LED_E 8
#define LED_F 9
#define BOTON1 10
#define BOTON2 11
#define BOTON3 12
#define ON 1
#define OFF 0
#define TRUE 1
#define FALSE 0

void setup()
{
    pinMode(LED_A, OUTPUT);
    pinMode(LED_B, OUTPUT);
    pinMode(LED_C, OUTPUT);
    pinMode(LED_D, OUTPUT);
    pinMode(LED_E, OUTPUT);
    pinMode(LED_F, OUTPUT);
}

void loop()
{
    loop_led_a();
    loop_led_b();
    loop_led_c();
    loop_led_d();
    loop_led_e();
    loop_led_f();
}

void loop_led_a()
{
    static long ultimo_cambio = 0;
    static int Estado_LED = OFF;

    long hora = millis();

    if (hora - ultimo_cambio > 100) {
        ultimo_cambio = hora;

        if (Estado_LED == ON) {
            digitalWrite(LED_A, LOW);
            Estado_LED = OFF;
        } else {
            digitalWrite(LED_A, HIGH);
            Estado_LED = ON;
        }
    }
}

void loop_led_b()
{
    static long ultimo_cambio = 0;
    static int Estado_LED = OFF;

    long hora = millis();

    if (hora - ultimo_cambio > 250) {
        ultimo_cambio = hora;

        Estado_LED = !Estado_LED;
        digitalWrite(LED_B, Estado_LED);
    }
}

void loop_led_c()
{
    digitalWrite(LED_C, digitalRead(BOTON));
}

void loop_led_d()
{
digitalWrite(LED_D, digitalRead(BOTON3));
}

void loop_led_e()
{
digitalWrite(LED_E, digitalRead(BOTON1));
}

void loop_led_f()
{
digitalWrite(LED_F, digitalRead(BOTON2));
}
