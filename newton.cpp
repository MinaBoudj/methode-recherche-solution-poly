#include<iostream>
#include <math.h>
using namespace std;

double func(double x){
    return x*x - 2;
}

double dFunc(double x){
    return 2*x*x;
}


/**
 * entree : a
 * sortie : @a
 * role : on part d'un point donnée et on applique la formule sur plusieurs itérations (fixé à 5)
 *  et on cherche les solutions de f(x) = 0;
*/
double newton(double a){
    for(int i=0; i<5; i++){
        a = a - func(a)/dFunc(a);
    }
    return a;
}

/**
 * entree : x0, x1
 * sortie : @resultat
 * role : on part d'un point donnée et on applique la formule sur plusieurs itérations (fixé à 5)
 *  et on cherche les solutions de f(x) = 0;
*/
double methode_secante(double x0, double x1){
    double tmp;
    for(int i=0; i<5; i++){
        tmp = x1;
        x1 = x1 - (func(x1)*(x1-x0))/(func(x1)-func(x0));
        x0 = tmp;
    }
    return x1 ;
}

int main(){
    double a;
    cout << "La fonction est x^2 - 1 " << endl;
    cout << "Entrer le point de depart " << endl;
    cin>> a;

    cout << "la solution trouver apres 5 iteration est : " << newton(a) << endl;
    cout << "la solution trouver apres 5 iteration de secante est : " << methode_secante(1, 2) << endl;
    return 0;
}

