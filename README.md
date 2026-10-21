# Cadenas y Punteros — Control de acceso en la RAM

**Actividad 4 — Manipulación de cadenas y punteros en C/C++** · Laboratorio de Programación · 5.º 3.ª A-B · E.E.S.T. N.º 1 «Eduardo Ader»

Sistema básico de **control de acceso por edad** que opera directamente sobre la memoria RAM:
el puntero `int* p = &edad;` guarda la dirección de la variable y el programa usa la
**desreferenciación** (`*p`) para leer y escribir su valor, mostrando además la dirección
hexadecimal real donde vive la variable.

- Estudiante: **Alexis Maier**

## Estructura

```
cadenaspunteros/
├── .gitignore
├── LICENSE
├── README.md
├── capturas/
│   ├── ejecucion_punteros.png     terminal con direcciones hexadecimales
│   └── esquema_ram.png            diagrama de la memoria (puntero y variable)
├── docs/
│   └── InformeProyectoCADENASPUNTEROS.pdf
└── src/
    └── main.cpp
```

## Compilar y ejecutar (PowerShell)

```
g++ src/main.cpp -o src/cadenaspunteros.exe
.\src\cadenaspunteros.exe
```
