/*
 * Ejercicio 2: Calcular la suma de los primeros N números naturales usando While
 * Taller de Estructuras Cíclicas
 * ESP32
 */

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ; // Esperar a que se conecte el puerto serial
  }
  
  Serial.println("=== Ejercicio 2: Suma de N números naturales ===");
  Serial.println();
  Serial.println("Ingrese un número entero N:");
}

void loop() {
  // Verificar si hay datos disponibles en el puerto serial
  if (Serial.available() > 0) {
    // Leer el número ingresado
    int N = Serial.parseInt();
    
    // Limpiar buffer
    while (Serial.available() > 0) {
      Serial.read();
    }
    
    Serial.println();
    Serial.print("N ingresado: ");
    Serial.println(N);
    Serial.println();
    
    // Validar si N es negativo (Pregunta 2)
    if (N < 0) {
      Serial.println("ERROR: N es negativo. No se puede calcular la suma.");
      Serial.println("Por favor, ingrese un número positivo:");
      return;
    }
    
    // Calcular suma usando While
    int suma = 0;
    int i = 1;
    
    Serial.println("--- Proceso de suma ---");
    while (i <= N) {
      suma += i;
      Serial.print("Suma parcial hasta ");
      Serial.print(i);
      Serial.print(": ");
      Serial.println(suma);
      i++;
      delay(100);
    }
    
    Serial.println();
    Serial.print("La suma de los primeros ");
    Serial.print(N);
    Serial.print(" números naturales es: ");
    Serial.println(suma);
    
    // Pregunta 1: Suma solo números impares hasta N
    Serial.println();
    Serial.println("=== Suma solo números IMPARES hasta N ===");
    int sumaImpares = 0;
    i = 1;
    while (i <= N) {
      if (i % 2 != 0) { // Si es impar
        sumaImpares += i;
        Serial.print("Sumando impar: ");
        Serial.print(i);
        Serial.print(" -> Total: ");
        Serial.println(sumaImpares);
      }
      i++;
      delay(100);
    }
    
    Serial.println();
    Serial.print("La suma de números impares hasta ");
    Serial.print(N);
    Serial.print(" es: ");
    Serial.println(sumaImpares);
    Serial.println();
    Serial.println("-----------------------------------");
    Serial.println("Ingrese otro número N (o presione RESET):");
  }
}
