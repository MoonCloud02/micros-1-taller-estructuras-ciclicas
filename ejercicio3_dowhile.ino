// Ejercicio 3: Conteo regresivo del 5 al 1 usando Do-While
// ESP32

void setup() {
  Serial.begin(115200);
  delay(1000);
  
  Serial.println("Ejercicio 3: Conteo regresivo");
  Serial.println();
  
  // Conteo del 5 al 1
  int contador = 5;
  
  do {
    Serial.println(contador);
    contador--;
    delay(500);
  } while (contador >= 1);
  
  Serial.println("Despegue!");
  Serial.println();
  
  // Pregunta 1: contar de 2 en 2
  Serial.println("Conteo de 2 en 2:");
  contador = 10;
  do {
    Serial.println(contador);
    contador = contador - 2;
    delay(500);
  } while (contador >= 1);
  
  Serial.println();
  
  // Pregunta 2: que pasa si inicio en 0?
  Serial.println("Iniciando en 0:");
  contador = 0;
  
  do {
    Serial.println(contador);
    contador--;
    delay(500);
  } while (contador >= 1);
  
  Serial.println("Se imprime el 0 porque do-while ejecuta al menos 1 vez");
}

void loop() {
  // vacio
}
