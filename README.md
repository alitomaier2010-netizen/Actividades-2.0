# Hola Mundo — El taller del programador

**Actividad 2 — El taller del programador** · Laboratorio de Programación · 5.º 3.ª A-B · E.E.S.T. N.º 1 «Eduardo Ader»

Configuración del entorno de desarrollo (VS Code + MinGW/GCC vía MSYS2) y primer programa de consola en C++.

- Estudiante: **Alexis Maier**
- Compilador verificado: `g++ (Rev2, Built by MSYS2 project) 14.2.0`
- Extensiones de VS Code: C/C++ (Microsoft), C/C++ Extension Pack y Code Runner

## Estructura

```
holamundo/
├── .gitignore
├── README.md
├── LICENSE
├── capturas/
│   ├── gpp_version.png            versión del compilador
│   ├── extensiones_vscode.png     extensiones instaladas
│   └── ejecucion_hola_mundo.png   compilación y ejecución
├── docs/
│   └── InformeProyectoHOLAMUNDO.pdf
└── src/
    └── main.cpp
```

## Compilar y ejecutar (PowerShell, desde la raíz del repositorio)

```
g++ src/main.cpp -o src/holamundo.exe
.\src\holamundo.exe
```
