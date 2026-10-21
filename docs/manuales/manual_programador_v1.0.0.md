# Manual del Programador — Sistema Proyecto v1.0.0

**Actividad 5 · LPR 5.º 3.ª A-B · Autor: Alexis Maier**

## 1. Propósito

Documentar cómo está modelada en C++ la entidad `EntidadProyecto` y cómo se manipulan sus miembros
a través de un puntero con el operador flecha (`->`).

## 2. Requisitos

- Compilador `g++` (MinGW-w64 / MSYS2) con soporte de C++11 o superior.
- Windows 10/11 con PowerShell, o cualquier terminal.

## 3. Estructura de datos

```
struct EntidadProyecto {
   int id;            // identificador numérico
   char nombre[50];   // nombre o descripción (cadena de hasta 49 caracteres)
   float metrica;     // lectura de sensor, consumo, avance, etc.
};
```

Un `struct` agrupa variables de distintos tipos (heterogeneidad) en bloques contiguos de memoria bajo
una misma entidad lógica. Esto evita declarar `id1`, `nombre1`, `metrica1`, `id2`, ... sueltas.

## 4. Funciones

- `void cargarDatos(EntidadProyecto* ptr)`: recibe la dirección de la estructura, pide cada dato por
  teclado y lo guarda con `ptr->id`, `cin.getline(ptr->nombre, 50)` y `ptr->metrica`.
- `main()`: crea `miEntidad` en el stack, llama a `cargarDatos(&miEntidad)` y muestra los datos
  verificados junto con su dirección hexadecimal en la RAM (`&miEntidad`).

## 5. Operador flecha y pasaje por referencia

- `ptr->id` equivale a `(*ptr).id`: desreferencia el puntero y accede al campo.
- Con un puntero no se puede usar `ptr.id`, porque el punto solo funciona sobre objetos, no sobre direcciones.
- Pasar `&miEntidad` envía solo la dirección (8 bytes en 64 bits) y modifica el original; pasar el struct
  por valor copiaría los 60 bytes de la estructura en cada llamada.

## 6. Buffer de entrada

Después de `cin >> ptr->id` queda un salto de línea (`\n`) en el buffer. Si no se usa `cin.ignore()`,
el siguiente `getline` lo lee como una línea vacía y se saltea el ingreso del nombre.

## 7. Compilación y ejecución

```
g++ src/main.cpp -o src/sistemaproyecto.exe
.\src\sistemaproyecto.exe
```

## 8. Control de versiones

Versión del documento: v1.0.0 (baseline). Código y capturas en la rama `modelado-datos-struct`.
