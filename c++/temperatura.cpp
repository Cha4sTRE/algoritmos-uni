#include<iostream>

using namespace std;

float temperatura;
string unidad;

int main() {
    cout << "temperatura a convertir: ";
    cin >> temperatura;
    cout << "unidad: ";
    cin >> unidad;

    cout << temperatura << "°" + unidad + " = "
        , unidad == "c" ? cout << ((temperatura * 9 / 5) + 32) << " fahrenheit y " << temperatura + 273.15 << " kelvin"
        : unidad == "f" ? cout << (temperatura - 32) * (5 / 9) << " celsius y " << (temperatura - 32) * (5 / 9) + 273.15 << " kelvin"
        : unidad == "k" ? cout << (temperatura - 273.15) * 9 / 5 + 32 << " fahrenheit y " << (temperatura - 273.15) << " celsius"
        : cout << "no hay conversion";//UwU.
};