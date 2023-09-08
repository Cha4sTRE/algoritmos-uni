#include<iostream>

using namespace std;
int main(){

float pies,metros;

cout<<"pies: ";cin>>pies;
cout<<"metros:  ";cin>>metros;

cout<< "suma total: "<<pies+metros<<endl;
cout<<"expresada en pulgas "<< (pies*12)+(metros*39.3)<<endl;
cout<<"expresada en yardas "<<(pies/3)+(metros*1.0936)<<endl;
cout<<"expresada en metros "<<(pies/3.28)+metros<<endl;
cout<<"expresada en millas "<<(pies/5280)+(metros/ 1609)<<endl;
};