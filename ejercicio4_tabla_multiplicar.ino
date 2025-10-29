// Ejercicio 4: Tabla de multiplicar
// ESP32

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Ingrese un numero:");
}

void loop() {
  if (Serial.available() > 0) {
    int numero = Serial.parseInt();
    
    Serial.println();
    Serial.print("Tabla del ");
    Serial.println(numero);
    Serial.println();
    
    // tabla usando for
    for (int i = 1; i <= 10; i++) {
      Serial.print(numero);
      Serial.print(" x ");
      Serial.print(i);
      Serial.print(" = ");
      Serial.println(numero * i);
      delay(200);
    }
    
    Serial.println();
    
    // Pregunta 1: tablas del 1 al 10
    Serial.println("Tablas del 1 al 10:");
    Serial.println();
    
    for (int tabla = 1; tabla <= 10; tabla++) {
      Serial.print("Tabla del ");
      Serial.println(tabla);
      
      for (int i = 1; i <= 10; i++) {
        Serial.print(tabla);
        Serial.print(" x ");
        Serial.print(i);
        Serial.print(" = ");
        Serial.println(tabla * i);
        delay(100);
      }
      
      Serial.println();
    }
    
    // Pregunta 2: solo pares
    Serial.println("Solo multiplos pares:");
    
    for (int i = 1; i <= 10; i++) {
      int resultado = numero * i;
      if (resultado % 2 == 0) {
        Serial.print(numero);
        Serial.print(" x ");
        Serial.print(i);
        Serial.print(" = ");
        Serial.println(resultado);
        delay(200);
      }
    }
    
    Serial.println();
    Serial.println("Ingrese otro numero:");
  }
}
