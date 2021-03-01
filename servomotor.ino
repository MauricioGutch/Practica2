//Este programa permite mover un servomotor con la ayuda de un potenciómetro.
//Además, los valores del angulo y voltaje son presentados en la LCD.
#include <Servo.h>//Incluimos la libreria para poder controlar el servomotor.
#include <LiquidCrystal.h> //Incluimos la librería para controlar la LCD.
Servo myservo; //Creamos un objeto que nos permitirá utilizar las funciones del servomotor.
LiquidCrystal lcd(12,11,5,4,3,2); //Se inicializan los pins para la LCD.
int analogPin= A0;// variable to read the value from the analog pin
int v=0; 
float volt=0; 
float val=0; //Estas tres variables serán utilizadas para procesar la información.
void setup() {
  lcd.begin(16,2);  //Configuramos el número de columnas y número de filas de la LCD.
  myservo.attach(9); //El servomotor se configura con el pin 9 para ser controlado.
}
void loop() { 
  v = (analogRead(analogPin)); //leemos la señal del potenciómetro
  volt= v*5;
  volt= volt/1023;//Realizamos la conversión de los valores leídos a Voltaje.
  val=map(v,0,1023,0,180);//Mapeamos la señal de entrada con respecto al ángulo que recibirá el servomotor.
  myservo.write(val);//El servomotor debe moverser según el ángulo enviado con el potenciómetro.
  lcd.setCursor(1,0);//Colocamos el cursor en la columna 2 de la primera fila.
  lcd.print("Voltaje:");
  lcd.setCursor(10,0);
  lcd.print(String(volt)); //Escribimos el voltaje en forma de String para que se imprima como mensaje.
  lcd.setCursor(1,1);
  lcd.print("Angulo:");
  lcd.setCursor(10,1);
  lcd.print(String(val));//Imprimimos el ángulo en forma de string para que se imprima en la LCD.

}
