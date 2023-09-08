#include<iostream>

using namespace std;

int minutos1,segundos1,minutos2,segundos2;
int main(){

    cout<<"atleta 1\n"<<"distancia recorrida:\n";
    cout<<"minutos: ";cin>>minutos1;
    cout<<"segundos: ";cin>>segundos1;

    cout<<"atleta 2\n"<<"distancia recorrida:\n";
    cout<<"minutos : ";cin>>minutos2;
    cout<<"segundos : ";cin>>segundos2;

    int total= (minutos1*60+segundos1)+(minutos2*60+segundos2);

    int horas= (total/3600);
    int minutos= (total/60);
    int segundos= (total/3600)%60;

    cout<<"total: "<<horas<<":"<<minutos<<":"<<segundos;

}