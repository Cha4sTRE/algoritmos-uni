#include<iostream>

using namespace std;
int main() {

    int a, b;
    string op;

    cout << "suma(+), resta(-), multiplicacion(x) y division(/)" << endl;
    cout << "a: ";cin >> a;
    cout << "operador: ";cin >> op;
    cout << "b: ";cin >> b;
    if (op == "+") { cout << a + b; };
    if (op == "-") { cout << a - b; };
    if (op == "x") { cout << a * b; };
    if (op == "/") { cout << a / b; };

};