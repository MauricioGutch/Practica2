//Este programa permite encender un LED cuando el voltaje es mayor a 3 V. Para conocer cuanto voltaje recibe la tarjeta arduino por su puerto analógico,
//se realiza un cálculo con regla de 3 para obtener el voltaje proporcional a la señal recibida del potenciómetro.
int analogPin=A0; // Variable que almacenará la señal del potenciómetro que se conecta a la terminal del medio.
float val=0; // Variable auxiliar para procesar la señal de entrada en Voltaje.
  void setup() {
    Serial.begin(9600); // Configuración de muestreo en el monitor serie
    pinMode(13, OUTPUT);//El pin 13 es configurado como salida para entregar señal al LED.
  }
  void loop() {
  val = (analogRead(analogPin)*5); // lee la entrada del pin A0.
  val = val/1023;//Cálculo con regla de 3 para operar la información con voltajes.
  Serial.print ("Voltaje: ");
  Serial.print(val); 
  Serial.println (" V ");//Estas 3 lineas imprimen el Voltaje con su unidad. Esto se visualiza con el Monitor Serie.
  if (val > 3){ //Si el voltaje es mayor a 3 V realiza la acción siguiente.
    digitalWrite(13, HIGH);//Enciende el led porque el voltaje es mayor a 3 V.
  }
  else{
    digitalWrite(13, LOW);//El voltaje no es mayor a 3 V y por lo tanto el LED no enciende.
    }
  
}
