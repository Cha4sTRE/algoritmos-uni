#include <iostream>

using namespace std;

int main()
{
    int edad;
    cout << "introduce tu edad: ";
    cin >> edad;
    // if (edad>=18){
    //     cout<<"eres mayor de edad";
    // }else{
    //     cout<<"eres menor de edad";
    // };
    edad >= 18 ? cout << "eres mayor de edad" : cout << "eres menor e edad";
};