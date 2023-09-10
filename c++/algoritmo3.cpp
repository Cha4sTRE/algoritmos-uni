#include<iostream>

using namespace std;

int hijos, edad, beneficio_acomulado;
string estado_civil;
int main() {
    cout << "hijos de la familia beneficiada: ";cin >> hijos;
    if (hijos >= 2) { beneficio_acomulado = 70.00; };
    if (hijos >= 3 && hijos <= 5) { beneficio_acomulado = 90; };
    if (hijos >= 6) { beneficio_acomulado = 120; };

    for (int i = 1;i <= hijos;i++) {
        cout << "edad de los hijos: ";cin >> edad;
        if (edad >= 6 && edad <= 18) { beneficio_acomulado += 10; };
    }
    cout << "estado civil de la madre(si es viuda acumula 10)\n";cin >> estado_civil;
    if (estado_civil == "viuda") { beneficio_acomulado += 10; };

    cout << "obtienen un subsidio familiar de: " << beneficio_acomulado;
}