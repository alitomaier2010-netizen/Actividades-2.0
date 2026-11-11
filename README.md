# Práctica en Papel — «Pensar antes de programar»

**Actividad 9 — Razonamiento lógico, prueba de escritorio y diagramas de flujo** · Laboratorio de Programación (LPR) · 5.º 3.ª A-B · E.E.S.T. N.º 1 «Eduardo Ader» — Vicente López

Rama `algoritmica` de la Actividad 9: cuatro ejercicios de razonamiento lógico resueltos
**primero en papel** (diagrama de flujo + prueba de escritorio en la carpeta de la materia)
y luego verificados con este **código de referencia** en C++.

| # | Ejercicio | Nivel | Contenido técnico | Color del diagrama |
|---|-----------|-------|-------------------|--------------------|
| 1 | El Sensor de Aprobación | 🟢 Básico | Variables, constantes (`const`) y condicional (`if/else`) | Verde |
| 2 | El Bucle del Contador de Vidas | 🟡 Intermedio | Estructura repetitiva `while` con contador descendente | Amarillo |
| 3 | Registro de Jugador en Memoria | 🟠 Avanzado | Agrupación heterogénea `struct` (texto + entero + booleano) | Naranja |
| 4 | Control de Inventario con Arreglos | 🔴 Experto | Vector de 5 posiciones, recorrido con `while` e índice `i` | Rojo |

- Estudiante: **Alexis Maier**
- Integrantes del grupo: Alexis Maier (trabajo individual)
- Docente: Mansilla Muñoz York Elías

## Estructura

```
algoritmica/
├── .gitignore                                exclusión de binarios (*.exe, *.out, .vscode/)
├── LICENSE                                   licencia MIT escolar
├── README.md                                 portada de la actividad y explicación técnica
├── docs/
│   └── InformeEEST1_LPR2026_ACT09_MaierAlexis_v1.0.0.pdf
│                                             informe APA v7 con fotos de carpeta
├── src/
│   └── main.cpp                              código fuente resuelto de referencia
└── capturas/
    └── matriz_ejecucion.png                  captura de la ejecución en consola
```

## Explicación técnica

### Ejercicio 1 — El Sensor de Aprobación (🟢)

Se define la constante `NOTA_MINIMA = 6` con `const int` (valor fijo que no puede
modificarse en tiempo de ejecución). Se leen `nota1` y `nota2` por teclado, se calcula
`promedio = (nota1 + nota2) / 2` y un condicional decide: si `promedio >= NOTA_MINIMA`
muestra **APROBADO**; en caso contrario, **A INTENSIFICACIÓN**. El rombo del diagrama
de flujo representa exactamente esa bifurcación.

### Ejercicio 2 — El Bucle del Contador de Vidas (🟡)

Se inicializa `vidas = 3` y un bucle `while (vidas > 0)` muestra el mensaje
«Jugador activo. Vidas restantes: X» y decrementa la variable (`vidas = vidas - 1`)
en cada vuelta. La flecha de retorno del diagrama vuelve a evaluar la condición del
rombo; cuando `vidas == 0` la condición falla, se sale del ciclo y se muestra
**GAME OVER**. La prueba de escritorio traza `vidas` en las 3 iteraciones: 3 → 2 → 1 → 0.

### Ejercicio 3 — Registro de Jugador en Memoria (🟠)

Se modela la agrupación heterogénea `struct Jugador` con tres campos de distinto tipo:
`nickname` (`string`, texto), `nivel` (`int`, entero) y `esVIP` (`bool`, verdadero/falso).
En el flujo principal se instancia el objeto `jugador1`, se cargan los campos por teclado
y un condicional evalúa `esVIP`: si es verdadero muestra «Bienvenido al Servidor VIP,
nickname»; si no, «Bienvenido al Servidor Estándar, nickname». El diagrama en papel incluye
el **bloque de RAM**: un rectángulo subdividido en los 3 campos con sus valores cargados.

### Ejercicio 4 — Control de Inventario con Arreglos (🔴)

Se predefine el vector `stock[5] = {12, 0, 5, 30, 0}` (5 posiciones, índices 0 a 4) y el
contador `i = 0`. El bucle `while (i < 5)` verifica `stock[i]`: si es `0` muestra
«ALERTA: Sin stock en la posición i» y luego incrementa `i = i + 1`. La prueba de escritorio
rastrea las 5 iteraciones (`i` vs `stock[i]`) y detecta las alertas en las posiciones 1 y 4.

## Compilar y ejecutar (PowerShell, desde la raíz del repositorio)

```
g++ -std=c++11 src/main.cpp -o src/algoritmica.exe
.\src\algoritmica.exe
```

El programa ejecuta los 4 ejercicios en orden. Datos de prueba de la consigna:

- **Caso A (Ej. 1):** `nota1 = 4`, `nota2 = 8` → promedio 6 → `APROBADO`.
  **Ej. 3:** `nickname = Rothbard`, `nivel = 5`, `esVIP = 1 (Verdadero)` → Servidor VIP.
- **Caso B (Ej. 1):** `nota1 = 3`, `nota2 = 5` → promedio 4 → `A INTENSIFICACIÓN`.
  **Ej. 3:** `nickname = Mises`, `nivel = 2`, `esVIP = 0 (Falso)` → Servidor Estándar.
