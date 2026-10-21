# Juego de Naves — POO en C++ (class Nave)

**Actividad 8 — Programación Orientada a Objetos (POO) en C++: juego de naves en consola** · Laboratorio de Programación · 5.º 3.ª A-B · E.E.S.T. N.º 1 «Eduardo Ader»

Simulador de combate espacial en consola (Windows) con clases `Nave`, `Asteroide` y `Bala`.
La nave se mueve con **W, A, S, D**, dispara con **ESPACIO** y tiene 3 vidas; los asteroides caen
desde arriba y el juego termina al perder todas las vidas.

- Estudiante: **Alexis Maier**
- Integrantes del grupo: Alexis Maier (individual)
- **Funcionalidad extra elegida: PUNTAJE** — +10 puntos por cada asteroide destruido, visible en el HUD y en la pantalla de Game Over.

## Conceptos de POO aplicados

- **Clase y objeto:** `Nave jugador(35, 20, 3);` crea un objeto con un constructor.
- **Encapsulamiento:** atributos `private` (`x`, `y`, `vidas`) accesibles solo por métodos `public` (`getVidas()`, `reducirVida()`, `mover()`).
- **Métodos:** `pintar()`, `borrar()` y `mover()` hacen que el objeto «se dibuje y se mueva por sí mismo».

## Estructura

```
juegodenaves/
├── .gitignore
├── LICENSE
├── README.md
├── capturas/
│   └── combate_consola.png        consola con nombre y apellido
├── docs/
│   ├── InformeEEST1_LPR2026_ACT08_G03_v1.0.0.pdf
│   ├── CHANGELOG.md
│   └── manuales/
│       ├── manual_programador_v1.0.0.pdf
│       └── manual_usuario_v1.0.0.pdf
└── src/
    └── main.cpp
```

## Compilar y ejecutar (PowerShell, Windows)

```
g++ src/main.cpp -o src/juegodenaves.exe
.\src\juegodenaves.exe
```

> Usa `<windows.h>` y `<conio.h>`, por lo que solo compila en Windows (MinGW-w64).
