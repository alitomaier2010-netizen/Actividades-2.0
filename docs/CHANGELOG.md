# Registro de cambios (CHANGELOG)

Formato basado en [Keep a Changelog](https://keepachangelog.com/es-ES/1.1.0/) y versionado semántico (SemVer).

## [1.0.0] - 2026-10-21 — Baseline aprobado

### Agregado
- Motor del juego con las clases `Nave`, `Asteroide` y `Bala` (código base de la actividad).
- Nombre y apellido del estudiante en el HUD (`PILOTO: Alexis Maier`).
- **Funcionalidad extra: puntaje.** `puntaje += 10` por asteroide destruido, mostrado en el HUD y en la pantalla final.

### Cambiado
- La nave se dibuja con un ancho fijo de 5 caracteres, igual al área de colisión (`x` a `x + 4`), para que borrar y pintar no dejen restos.
- Al reemplazar un asteroide destruido se libera el objeto anterior con `delete` (el código base lo dejaba sin liberar).
- Se liberan los objetos dinámicos restantes al terminar la partida.
