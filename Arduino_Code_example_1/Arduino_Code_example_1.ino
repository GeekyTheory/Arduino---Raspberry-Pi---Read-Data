/*
     Arduino + Raspberry Pi - Read Data
	
Mario Pérez Esteso
http://www.geekytheory.com
https://www.youtube.com/user/telecoreference

https://twitter.com/geekytheory

Facebook page! Join us with a LIKE!
https://www.facebook.com/geekytheory
*/
void setup () {
  Serial.begin(9600); //Inicializo el puerto serial a 9600 baudios
}

void loop () {
  if (Serial.available()) { //Si está disponible
    char c = Serial.read(); //Guardamos la lectura en una variable char
    if (c == 'H') { //Si es una 'H', enciendo el LED
      Serial.println("'H' pulsada");
    } else if (c == 'L') { //Si es una 'L', apago el LED
      Serial.println("'L' pressed");
    } else {
      Serial.println("Caracter no reconocido");
    }
  }
}
