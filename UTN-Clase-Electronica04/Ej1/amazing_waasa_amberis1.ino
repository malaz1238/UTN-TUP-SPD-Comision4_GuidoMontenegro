// Código Ejemplo
int buttonState = 0;
void setup()
{
// Configurar Pin como Entrada
pinMode(2, INPUT);
// Configurar Pines como Salida
pinMode(5, OUTPUT);
pinMode(13, OUTPUT);
}
void loop()
{
// Leer Estado del Puerto de Entrada 2
buttonState = digitalRead(2);
// Actual Segun el Estado de la Lectura
if (buttonState == HIGH){
// Apagar Led en Puerto 5
digitalWrite(5, LOW);
// Encender Led en Puerto 13
digitalWrite(13, HIGH);
// Encender Led en Puerto 12
digitalWrite(12, LOW);
// Esperar 0.15 Segundos
delay(150);
// Encender Led en Puerto 5
digitalWrite(5, HIGH);
// Apagar Led en Puerto 13
digitalWrite(13, LOW);
// Encender Led en Puerto 12
digitalWrite(12, HIGH);
// Esperar 0.15 Segundos
delay(150);
} else {
// Apagar Leds en Puertos 5 y 13
digitalWrite(5, LOW);
digitalWrite(13, LOW);
}
}