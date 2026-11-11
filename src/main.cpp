/*
  ============================================================================================
  Materia: Laboratorio de Programación (LPR) — 5° Año
  Institución: E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
  Archivo: src/main.cpp
  Actividad 9: Práctica en Papel — "Pensar antes de programar" (rama algoritmica)
  Docente: Mansilla Muñoz York
  Estudiante: Alexis Maier
  Descripción: Código de referencia de los 4 ejercicios de razonamiento lógico resueltos
               primero en papel (diagrama de flujo + prueba de escritorio).
               Ej. 1 (🟢): Sensor de Aprobación — constantes y condicional.
               Ej. 2 (🟡): Bucle de Vidas — estructura repetitiva while.
               Ej. 3 (🟠): Registro de Jugador — struct (agrupación heterogénea).
               Ej. 4 (🔴): Control de Inventario — vector recorrido con while e índice.
  ============================================================================================
*/
#include <iostream>
#include <string>
#include <windows.h> // SetConsoleOutputCP: consola en UTF-8 (tildes y símbolos)
using namespace std;

// ========================================================================
// EJERCICIO 1 (🟢): EL SENSOR DE APROBACIÓN
// Variables, Constantes y Condicionales
// Diagrama de flujo en papel: color VERDE
// ========================================================================
void ejercicio1_sensor_aprobacion() {
   cout << "--- Ejercicio 1: El Sensor de Aprobacion (VERDE) ---" << endl;
   cout << endl;

   // Requisito 1: constante de solo lectura (no puede modificarse en ejecución)
   const int NOTA_MINIMA = 6;

   // Requisito 2: solicitar y leer las dos notas por teclado
   int nota1, nota2;
   cout << "Ingrese la nota del Primer Cuatrimestre: ";
   cin >> nota1;
   cout << "Ingrese la nota del Segundo Cuatrimestre: ";
   cin >> nota2;

   // Requisito 3: calcular el promedio
   int promedio = (nota1 + nota2) / 2;
   cout << "Promedio calculado: " << promedio << endl;

   // Requisito 4: condicional (el ROMBO del diagrama de flujo)
   if (promedio >= NOTA_MINIMA) {
      cout << "APROBADO" << endl;         // rama VERDADERA del rombo
   } else {
      cout << "A INTENSIFICACION" << endl; // rama FALSA del rombo
   }
   cout << endl;
}

// ========================================================================
// EJERCICIO 2 (🟡): EL BUCLE DEL CONTADOR DE VIDAS
// Estructuras Repetitivas / Iteraciones
// Diagrama de flujo en papel: color AMARILLO
// ========================================================================
void ejercicio2_bucle_vidas() {
   cout << "--- Ejercicio 2: El Bucle del Contador de Vidas (AMARILLO) ---" << endl;
   cout << endl;

   // Requisito 1: inicializar la variable de control
   int vidas = 3;

   // Requisito 2: bucle MIENTRAS vidas > 0
   // (la flecha de retorno del diagrama vuelve a evaluar este rombo)
   while (vidas > 0) {
      cout << "Jugador activo. Vidas restantes: " << vidas << endl;
      vidas = vidas - 1; // impacto de un obstáculo: decremento
   }

   // Requisito 3: al salir del bucle (vidas == 0)
   cout << "GAME OVER" << endl;
   cout << endl;
}

// ========================================================================
// EJERCICIO 3 (🟠): REGISTRO DE JUGADOR EN MEMORIA
// Estructuras / Agrupaciones (struct)
// Diagrama de flujo + bloque de RAM en papel: color NARANJA
// ========================================================================

// Requisito 1: modelo del struct (agrupación heterogénea: texto + entero + booleano)
struct Jugador {
   string nickname; // campo de texto
   int    nivel;    // campo entero
   bool   esVIP;    // campo booleano (Verdadero o Falso)
};

void ejercicio3_registro_jugador() {
   cout << "--- Ejercicio 3: Registro de Jugador en Memoria (NARANJA) ---" << endl;
   cout << endl;

   // Requisito 2: instanciar un objeto de tipo Jugador en el flujo principal
   Jugador jugador1;

   // Requisito 3: cargar manualmente sus atributos leyendo por teclado
   cout << "Ingrese el nickname del jugador: ";
   cin >> jugador1.nickname;
   cout << "Ingrese el nivel del jugador: ";
   cin >> jugador1.nivel;
   cout << "Es VIP? (1 = Verdadero / 0 = Falso): ";
   int esVIP_entero;
   cin >> esVIP_entero;
   jugador1.esVIP = (esVIP_entero == 1);

   // Bloque de RAM simulado (lo que se dibuja en papel subdividido en 3 campos):
   // ┌──────────────────────────────┐
   // │ nickname │ nivel │   esVIP   │
   // │ "X"     │   N   │ Verdadero │
   // └──────────────────────────────┘
   cout << endl;
   cout << "Estado en RAM del objeto jugador1:" << endl;
   cout << "+-------------------------+" << endl;
   cout << "| nickname = " << jugador1.nickname << endl;
   cout << "| nivel    = " << jugador1.nivel << endl;
   cout << "| esVIP    = " << (jugador1.esVIP ? "Verdadero" : "Falso") << endl;
   cout << "+-------------------------+" << endl;

   // Requisito 4: evaluar el campo booleano (ROMBO del diagrama)
   if (jugador1.esVIP) {
      cout << "Bienvenido al Servidor VIP, " << jugador1.nickname << endl;
   } else {
      cout << "Bienvenido al Servidor Estandar, " << jugador1.nickname << endl;
   }
   cout << endl;
}

// ========================================================================
// EJERCICIO 4 (🔴): CONTROL DE INVENTARIO CON ARREGLOS
// Vectores y Recorrido
// Diagrama de flujo + casilla del vector en papel: color ROJO
// ========================================================================
void ejercicio4_control_inventario() {
   cout << "--- Ejercicio 4: Control de Inventario con Arreglos (ROJO) ---" << endl;
   cout << endl;

   // Requisito 1: vector predefinido de 5 posiciones (índices 0 a 4)
   int stock[5] = {12, 0, 5, 30, 0};

   // Casilla del vector dibujada en papel:
   // índice:   [0]  [1] [2]  [3] [4]
   // valor:    12    0   5   30   0
   cout << "Vector stock: [";
   for (int j = 0; j < 5; j++) {
      cout << stock[j] << (j < 4 ? ", " : "");
   }
   cout << "]" << endl;

   // Requisito 2: contador del índice
   int i = 0;

   // Requisito 3: recorrer mientras i < 5
   while (i < 5) {
      if (stock[i] == 0) {
         cout << "ALERTA: Sin stock en la posicion " << i << endl;
      }
      i = i + 1; // incrementar el contador
   }
   cout << endl;
}

// ========================================================================
// FLUJO PRINCIPAL: ejecuta los 4 ejercicios en orden
// ========================================================================
int main() {
   SetConsoleOutputCP(65001); // UTF-8 para tildes y símbolos en la consola

   cout << "==================================================" << endl;
   cout << " ACTIVIDAD 9 - PENSAR ANTES DE PROGRAMAR" << endl;
   cout << " Laboratorio de Programacion - 5o 3a A-B" << endl;
   cout << " E.E.S.T. Nro. 1 Eduardo Ader - Vicente Lopez" << endl;
   cout << " Alexis Maier - Codigo de referencia (rama algoritmica)" << endl;
   cout << "==================================================" << endl;
   cout << endl;

   ejercicio1_sensor_aprobacion(); // 🟢 Caso A: 4 y 8 -> APROBADO | Caso B: 3 y 5 -> A INTENSIFICACION
   ejercicio2_bucle_vidas();       // 🟡 vidas: 3 -> 2 -> 1 -> GAME OVER
   ejercicio3_registro_jugador();  // 🟠 Rothbard, 5, Verdadero -> Servidor VIP
   ejercicio4_control_inventario();// 🔴 alertas en las posiciones 1 y 4

   cout << "--- Fin de la ejecucion de los 4 ejercicios ---" << endl;
   return 0;
}
