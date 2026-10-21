# Repaso General — Taller de repaso y consolidación en C++

**Actividad 6 — Taller práctico de repaso y consolidación en C++** · Laboratorio de Programación · 5.º 3.ª A-B · E.E.S.T. N.º 1 «Eduardo Ader»

Suite unificada de tres retos de bajo nivel en C++:

| Reto | Tema | Núcleo del código |
|------|------|-------------------|
| 1 | Recursividad (suma de 1 a N) | caso base `if (n <= 0) return 0;` |
| 2 | Búsqueda secuencial en un arreglo contiguo | `break` al encontrar el valor |
| 3 | Intercambio de variables con punteros | variable `temporal` y desreferenciación `*` |

- Estudiante: **Alexis Maier**
- Integrantes del grupo: Alexis Maier (individual)

## Estructura

```
repasogeneral/
├── .gitignore
├── LICENSE
├── README.md
├── capturas/
│   ├── ejecucion_repasogeneral.png
│   └── traza_memoria.png
├── docs/
│   ├── InformeEEST1_LPR2026_ACT06_G03_Informe_v1.0.0.pdf
│   ├── CHANGELOG.md
│   └── manuales/
│       ├── manual_programador_v1.0.0.pdf
│       └── manual_usuario_v1.0.0.pdf
└── src/
    └── main.cpp
```

## Compilar y ejecutar (PowerShell)

```
g++ src/main.cpp -o src/repasogeneral.exe
.\src\repasogeneral.exe
```
