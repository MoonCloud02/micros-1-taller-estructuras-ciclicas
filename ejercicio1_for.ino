/*
 * Ejercicio 1: Imprimir números del 1 al 10 usando un ciclo For
 * Taller de Estructuras Cíclicas
 * ESP32
 */

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ; // Esperar a que se conecte el puerto serial
  }
  
  Serial.println("=== Ejercicio 1: Números del 1 al 10 ===");
  Serial.println();
  
  // Ciclo For para imprimir del 1 al 10
  for (int i = 1; i <= 10; i++) {
    Serial.print("Número: ");
    Serial.println(i);
    delay(200); // Pequeño delay para mejor visualización
  }
  
  Serial.println();
  Serial.println("=== Fin del conteo ===");
  
  // Pregunta 1: Contar de 10 a 1 (regresivo)
  Serial.println();
  Serial.println("=== Conteo regresivo (10 a 1) ===");
  for (int i = 10; i >= 1; i--) {
    Serial.print("Número: ");
    Serial.println(i);
    delay(200);
  }
  
  // Pregunta 2: Imprimir solo números pares
  Serial.println();
  Serial.println("=== Solo números pares (2 al 10) ===");
  for (int i = 2; i <= 10; i += 2) {
    Serial.print("Número par: ");
    Serial.println(i);
    delay(200);
  }
  
  Serial.println();
  Serial.println("Programa finalizado. Presione RESET para reiniciar.");
}

void loop() {
  // No se necesita código en loop para este ejercicio
}
