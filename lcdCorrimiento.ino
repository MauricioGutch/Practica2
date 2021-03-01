//Este programa escribe sobre la pantalla el LCD el nombre del alumno.
//Además, el nombre se despliega de derecha a izquierda de forma continua.
#include <LiquidCrystal.h> // se incluye la libreria de pantalla de cristal líquido.
LiquidCrystal lcd(12,11,5,4,3,2); //Se inicializan los pins para la LCD.
void setup() {
  lcd.begin(16,2); //Configuramos el número de columnas y número de filas de la LCD.
}
void loop() {
  lcd.setCursor(20,0);//Colocamos el cursor fuera de la pantalla, en la columna 21 primer fila.
  lcd.print("Mauricio");// Imprimimos el nombre del alumno. 
  lcd.setCursor(16,1); //Colocamos el cursor fuera de la pantalla, en la columna 17 segunda fila.
  lcd.print("Gutierrez Chavez");//Imprimimos los apellidos.
  for (int p=0; p<16; p++){ //Esta función permite recorrer el nombre y los apellidos 
    lcd.scrollDisplayLeft();// 16 espacios hacia la derecha, haciendo un efecto de desplazamiento.
    delay(150);//Este retardo se coloca para visualizar el desplazamiento.
    }
  delay(1500);//Este retardo es para visualizar el nombre completo.
  lcd.clear();//Limpiamos la LCD para volver a comenzar.
  }
