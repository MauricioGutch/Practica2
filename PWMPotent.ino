//Este programa varía la intensidad de un LED según la posición del potenciómetro
int analogPin=A0; // Variable que almacenará la señal del potenciómetro que se conecta a la terminal del medio.
float val=0, v=0; // Variables auxiliares para procesar la señal de entrada en Voltaje.
  void setup() {
    Serial.begin(9600); // Configuración de muestreo en el monitor serie
    pinMode(13, OUTPUT);//El pin 13 es configurado como salida para entregar señal al LED.
  }
  void loop() {
  val = (analogRead(analogPin)); // lee la entrada del pin A0 que tiene un rango de 0 a 1023.
  analogWrite(13, val/4); //Dividimos la variable var entre 4 porque analogWrite() sólo escribe de 0 hasta 255.
  v=(val*5)/1023;//Cálculo con regla de 3 para operar la información con voltajes.
  Serial.print ("Voltaje: ");
  Serial.print(v); 
  Serial.println (" V ");//Estas 3 lineas imprimen el Voltaje con su unidad. Esto se visualiza con el Monitor Serie.
  
}
