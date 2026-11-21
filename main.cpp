// Ventas del Colmado Don Junior: registra las ventas de la semana y muestra un resumen
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int DIAS = 7; // cantidad de dias de la semana

int main() {
    string dias[DIAS] = { "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo" };
    double ventas[DIAS];
    double total = 0;

    // Pedir las ventas de cada dia (no se aceptan negativas)
    for (int i = 0; i < DIAS; i++) {
        do {
            cout << "Ventas del " << dias[i] << ": RD$ ";
            cin >> ventas[i];
            if (ventas[i] < 0) cout << "Error: no se permiten ventas negativas.\n";
        } while (ventas[i] < 0);
        total += ventas[i];
    }

    double promedio = total / DIAS;
    int mayor = 0, menor = 0, sobrePromedio = 0;

    // Mostrar listado y buscar el dia de mayor y menor venta
    cout << fixed << setprecision(2);
    cout << "\n===== VENTAS DEL COLMADO DON JUNIOR =====\n";
    for (int i = 0; i < DIAS; i++) {
        cout << left << setw(11) << dias[i] + ":" << "RD$ " << ventas[i] << endl;
        if (ventas[i] > ventas[mayor]) mayor = i;
        if (ventas[i] < ventas[menor]) menor = i;
        if (ventas[i] > promedio) sobrePromedio++;
    }

    // Mostrar el resumen
    cout << "----------------------------------------\n";
    cout << "Total semanal:   RD$ " << total << endl;
    cout << "Promedio diario: RD$ " << promedio << endl;
    cout << "Mayor venta: " << dias[mayor] << " (RD$ " << ventas[mayor] << ")\n";
    cout << "Menor venta: " << dias[menor] << " (RD$ " << ventas[menor] << ")\n";
    cout << "Dias sobre el promedio: " << sobrePromedio << " -> ";
    int mostrados = 0;
    for (int i = 0; i < DIAS; i++) {
        if (ventas[i] > promedio) {
            cout << dias[i];
            mostrados++;
            if (mostrados < sobrePromedio) cout << ", "; // coma entre dias
        }
    }
    cout << endl;

    return 0;
}
