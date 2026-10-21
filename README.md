# Piedra, Papel o Tijera — Persistencia de datos con struct + fstream

**Actividad 7 — Mini juego «Piedra, Papel o Tijera» con persistencia de datos** · Laboratorio de Programación · 5.º 3.ª A-B · E.E.S.T. N.º 1 «Eduardo Ader»

Juego de consola contra la «IA» (elección aleatoria). Cada partida se guarda en un `struct Partida`
y se persiste en `src/historial_partidas.txt` (formato CSV, modo *append* con `ios::app`).
La opción 2 del menú recupera el historial completo desde el disco aunque se haya cerrado el programa.

- Estudiante: **Alexis Maier**
- Integrantes del grupo: Alexis Maier (individual)

## Estructura

```
piedrapapelotijera/
├── .gitattributes
├── .gitignore
├── LICENSE
├── README.md
├── capturas/
│   ├── jugada_consola.png          menú y partidas jugadas
│   ├── persistencia_reapertura.png programa reabierto mostrando el historial
│   └── archivo_disco.png           contenido del .txt en el disco
├── docs/
│   ├── InformeEEST1_LPR2026_ACT07_G03_Informe_v1.0.0.pdf
│   ├── CHANGELOG.md
│   └── manuales/
│       ├── manual_programador_v1.0.0.{md,pdf}
│       └── manual_usuario_v1.0.0.{md,pdf}
└── src/
    ├── main.cpp
    └── historial_partidas.txt
```

## Compilar y ejecutar (PowerShell, desde la raíz del repositorio)

```
g++ -std=c++11 src/main.cpp -o src/piedrapapelotijera.exe
.\src\piedrapapelotijera.exe
```

> El programa abre `src/historial_partidas.txt` con ruta relativa, por lo que debe ejecutarse desde la raíz del repositorio.
