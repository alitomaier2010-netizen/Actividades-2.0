# Manual del Usuario — Piedra, Papel o Tijera v1.0.0

**Actividad 7 · LPR 5.º 3.ª A-B · Autor: Alexis Maier**

## 1. ¿Qué es?

Un juego de consola donde se juega Piedra, Papel o Tijera contra la computadora. Cada partida queda guardada en un archivo, de modo que se puede consultar el historial incluso después de cerrar y volver a abrir el programa.

## 2. Cómo iniciarlo

1. Abrir PowerShell en la carpeta del proyecto.
2. Compilar: `g++ -std=c++11 src/main.cpp -o src/piedrapapelotijera.exe`
3. Ejecutar: `.\src\piedrapapelotijera.exe`

## 3. Menú principal

- **1. Jugar Partida:** pide su nombre o nickname y luego la jugada (1 Piedra, 2 Papel, 3 Tijera). Muestra lo que eligió la computadora y el resultado (Victoria, Derrota o Empate).
- **2. Ver Historial:** lista todas las partidas guardadas en el disco.
- **3. Salir:** cierra el programa. Los datos ya están guardados.

## 4. Reglas

Piedra gana a Tijera, Tijera gana a Papel y Papel gana a Piedra. Si ambos eligen lo mismo, es empate.

## 5. Preguntas frecuentes

- **¿Dónde se guardan las partidas?** En el archivo `src/historial_partidas.txt`.
- **El historial dice que no hay partidas.** Todavía no se jugó ninguna; elija la opción 1.
- **Escribí una opción inválida.** El programa muestra un error y vuelve a mostrar el menú.
