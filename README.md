# Sistema Proyecto — Modelado de datos con struct y punteros

**Actividad 5 — Modelado de datos con estructuras (struct) y punteros** · Laboratorio de Programación · 5.º 3.ª A-B · E.E.S.T. N.º 1 «Eduardo Ader»

Modelo en C++ de una entidad del mundo real (por ejemplo un sensor o módulo de hardware) mediante un
`struct EntidadProyecto { int id; char nombre[50]; float metrica; }`. Los datos se cargan en una función
que recibe la **dirección** de la estructura (`EntidadProyecto*`) y accede a sus miembros con el
**operador flecha** (`->`), evitando copias en la RAM.

- Estudiante: **Alexis Maier**
- Integrantes del grupo: Alexis Maier (individual)

## Estructura

```
sistemaproyecto/
├── .gitignore
├── LICENSE
├── README.md
├── capturas/
│   └── ejecucion_struct.png
├── docs/
│   ├── InformeEEST1_LPR2026_ACT05_G03_v1.0.0.pdf
│   └── manuales/
│       ├── manual_programador_v1.0.0.md
│       └── manual_programador_v1.0.0.pdf
└── src/
    └── main.cpp
```

## Compilar y ejecutar (PowerShell)

```
g++ src/main.cpp -o src/sistemaproyecto.exe
.\src\sistemaproyecto.exe
```
