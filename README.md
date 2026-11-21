# Ventas del Colmado Don Junior

Programa en C++ que registra las ventas diarias del colmado "Don Junior" de lunes a domingo, las guarda en un arreglo unidimensional y muestra un resumen de la semana: listado de ventas, total semanal, promedio diario, día con mayor venta, día con menor venta y los días que superaron el promedio. El programa valida que no se ingresen ventas negativas.

## Estudiante

**Junior Ivón José Jean** — Matrícula 2026-1655


## Instrucciones para compilar y ejecutar

### Con Visual Studio
1. Crear un proyecto vacío de C++ (Console App).
2. Agregar el archivo `main.cpp` al proyecto.
3. Presionar `Ctrl + F5` para compilar y ejecutar.

### Con g++ (terminal)
```bash
g++ main.cpp -o ventas
./ventas        # En Windows: ventas.exe
```

## Ejemplo de ejecución

```
Ventas del Lunes: RD$ 3500
Ventas del Martes: RD$ 2800
Ventas del Miercoles: RD$ -5
Error: no se permiten ventas negativas.
Ventas del Miercoles: RD$ 3000
Ventas del Jueves: RD$ 3200
Ventas del Viernes: RD$ 4500
Ventas del Sabado: RD$ 7200
Ventas del Domingo: RD$ 4250

===== VENTAS DEL COLMADO DON JUNIOR =====
Lunes:     RD$ 3500.00
Martes:    RD$ 2800.00
Miercoles: RD$ 3000.00
Jueves:    RD$ 3200.00
Viernes:   RD$ 4500.00
Sabado:    RD$ 7200.00
Domingo:   RD$ 4250.00
----------------------------------------
Total semanal:   RD$ 28450.00
Promedio diario: RD$ 4064.29
Mayor venta: Sabado (RD$ 7200.00)
Menor venta: Martes (RD$ 2800.00)
Dias sobre el promedio: 3 -> Viernes, Sabado, Domingo
```
