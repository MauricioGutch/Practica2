//Con este programa hacemos parpadear un mensaje en la LCD
#include <LiquidCrystal.h> // se incluye la libreria de pantalla de cristal líquido.
LiquidCrystal lcd(12,11,5,4,3,2); //Se inicializan los pins para la LCD.
void setup() {
  lcd.begin(16,2); //Configuramos el número de columnas y número de filas de la LCD.
}
void loop() {
  lcd.setCursor(1,0); //Colocamos el cursor en la columna 2 de la primer fila.
  lcd.print("Principios de");//Imprimimos el mensaje en la primer fila.
  lcd.setCursor(2,1);//Colocamos el cursor en la columna 3 de la segunda fila.
  lcd.print("Mecatronica");//Imprimimos el mensaje en la segunda fila.
  lcd.display();//Muestra el mensaje.
  delay(750);//Con este retardo aseguramos que durará 3/4 de segundo el mensaje en la LCD
  lcd.noDisplay();//El mensaje no se muestra. 
  delay(250);//Con este retardo aseguramos 1/4 de segundo que no aparecerá el mensaje.
}
