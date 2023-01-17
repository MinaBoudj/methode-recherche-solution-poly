#include<iostream>
#include <math.h>
using namespace std;

double func(double x){
    return x*x*x - x -1;
}

void bisection(double a,double b, double e){
    double xi;
    e=1/pow(10,e);
    if(func(a) * func(b) >= 0){
        cout<<"Incorrect a and b";
        return;
    }else{
        while ((b - a) >= e) {
            xi = (a + b) / 2;
            if (func(xi) == 0.0) {
                cout << "Racine = " << xi << endl;
                break;
            }else if (func(xi) * func(a) < 0) {
                cout << "Racine = " << xi << endl;
                b = xi;
            } else {
                cout << "Racine = " << xi << endl;
                a = xi;
            }
        }
        cout << "\nLa racine correct calculer est =  " << xi;
    }
}


int main(){
    double a,b,e;
    cout<<"Enter une valeur pour l'intervale 'a': ";
    cin>>a;
    cout<<"Enter une valeur pour l'intervale 'b': ";
    cin>>b;
    cout<<"Entrer le nombre de chiffre apres la virgule vous voulez prendre: ";
    cin>>e;
    printf("La fonction est x^3-x-1\n");
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    bisection(a,b,e);
    
    return 0;
}