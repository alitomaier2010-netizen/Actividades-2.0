# Cálculo de Área — Enfoque modular y diseño Top-Down

**Actividad 3 — Enfoque modular y diseño Top-Down** · Laboratorio de Programación · 5.º 3.ª A-B · E.E.S.T. N.º 1 «Eduardo Ader»

Programa en C++ que calcula el **área de un círculo** (`A = π · r²`) dividiendo el problema en módulos:
prototipo de función, filtro de consistencia (el radio debe ser > 0), función `calcularAreaCirculo`
con la constante `const double PI`, y un bonus que dibuja una diana ASCII según el tamaño del radio.

- Estudiante: **Alexis Maier**

## Estructura

```
calculoarea/
├── .gitignore
├── LICENSE
├── README.md
├── capturas/
│   ├── compilacion_area.png
│   └── diagrama_flujo.png
├── docs/
│   └── InformeProyectoCALCULOAREA.pdf
└── src/
    └── main.cpp
```

## Compilar y ejecutar (PowerShell)

```
g++ src/main.cpp -o src/area.exe
.\src\area.exe
```
