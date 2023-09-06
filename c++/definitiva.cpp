#include<iostream>

using namespace std;

float notas[4];
float suma;
int main() {
    for (int i = 0;i < sizeof(notas) / sizeof(int);i++) {
        cout << "nota " << i << ": ";cin >> notas[i];
        suma += notas[i];
    };
    cout << suma / (sizeof(notas) / sizeof(int));
};