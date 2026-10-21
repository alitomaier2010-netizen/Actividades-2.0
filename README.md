# Calculadora de Edad (Python & C++)

**Actividad 1 — Revisión integral (Python & C++)** · Laboratorio de Programación · 5.º 3.ª A-B · E.E.S.T. N.º 1 «Eduardo Ader»

Programa que calcula la **edad exacta** de una persona restando su año de nacimiento al año actual
(fecha de referencia del ejercicio: **8/7/2026**) y descontando un año si todavía no cumplió años.
Antes de calcular aplica un *filtro de consistencia* que verifica que la fecha exista en el calendario
real (meses de 30/31 días y años bisiestos).

- Estudiante: **Alexis Maier**
- Lenguajes: C++ (`proyecto_cpp/`) y Python (`proyecto_python/`)

## Estructura

```
calculadoraedad/
├── .gitignore
├── README.md
├── LICENSE
├── capturas/                 evidencias de ejecución (.png)
├── docs/
│   └── InformeProyectoCalculadoraEdad.pdf
├── proyecto_cpp/
│   └── calculadoraEdad.cpp
└── proyecto_python/
    └── calculadoraEdad.py
```

## Cómo ejecutarlo

```
g++ proyecto_cpp/calculadoraEdad.cpp -o proyecto_cpp/calculadoraEdad.exe
.\proyecto_cpp\calculadoraEdad.exe

python proyecto_python/calculadoraEdad.py
```
