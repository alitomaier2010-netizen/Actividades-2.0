# Registro de cambios (CHANGELOG)

Formato basado en [Keep a Changelog](https://keepachangelog.com/es-ES/1.1.0/) y versionado semántico (SemVer).

## [1.1.0] - 2026-11-18 — Respaldo Dual-Remote configurado

### Cambiado
- Se configuró GitLab como segundo destino de `push`, manteniendo GitHub como `origin` de `fetch` (estrategia «anti-caídas» descripta en el informe de la ACT06).
- Se declararon ambos destinos de push para que un único `git push` actualice los dos servidores:
  - `git remote set-url --add --push origin https://github.com/alitomaier2010-netizen/Actividades-2.0.git`
  - `git remote set-url --add --push origin https://gitlab.com/Alitopro/Actividades-2.0.git`
- `git remote -v` verificado: una línea de `fetch` (GitHub) y dos de `push` (GitHub + GitLab).
- Las 10 ramas del repositorio se subieron al proyecto público de GitLab: https://gitlab.com/Alitopro/Actividades-2.0

## [1.0.0] - 2026-10-21 — Baseline aprobado

### Agregado
- Suite `src/main.cpp` con los tres retos del taller: suma recursiva, búsqueda secuencial e intercambio con punteros.
- Personalización de la salida con el nombre del estudiante (Alexis Maier).
- Capturas de ejecución y traza de memoria en `capturas/`.
- Manual del programador y manual del usuario (v1.0.0) en `docs/manuales/`.
- Informe APA v7 de la actividad en `docs/`.
