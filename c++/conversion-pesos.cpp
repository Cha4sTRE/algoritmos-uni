#include <iostream>

using namespace std;

float peso;
string med;
int main()
{
    cout << "medida a convertir: \n" << "gramo(g) o kilogramos(kg)";
    cin >> med;
    cout << "peso: ";
    cin >> peso;

    // if (med == "g")
    // {
    //     cout << peso << " libras = " << peso * peso << "g";
    // }
    // else if (med == "kg")
    // {
    //     cout << peso << " libras = " << peso / 2.205 << "kg";
    // }

    cout << peso << " libras = "
        , med == "g" ? cout << peso << " libras = " << peso * peso
        : med == "kg" ? cout << peso << " libras = " << peso / 2.205
        : cout << "no hay conversion";
};