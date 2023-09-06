#include<iostream>

using namespace std;
int main() {
    int a;
    float promedio;
    float porcentaje;
    float suma;
    cout << "cuantas notas desea agregar: ";

    cin >> a;
    float notas[a];

    for (int i = 0;i < sizeof(notas) / sizeof(int);i++) {
        cout << "nota " << i << ": ";cin >> notas[i];
        suma += notas[i];
    };
    promedio = suma / (sizeof(notas) / sizeof(int));
    cout << "promedio:" << promedio;
    porcentaje = promedio * 0.20;
    cout << porcentaje << "%";

};