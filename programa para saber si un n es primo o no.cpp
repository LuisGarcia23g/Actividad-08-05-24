//programa que solicita un n y diga si es un numero primo
#include <iostream>
using namespace std;

int main()
{

//variables
int n=0, i=0, primo=1, resultado=0;

cout << "Escriba un numero entero: ";
cin >>n;

//para saber si es primo o no
for (i=n-1; i>=2; i--){
resultado = n % i;
}
//para saber si no es primo
if (resultado == 0){
    cout << "Su numero no es primo";
}

//para saber si es primo
else if (resultado == 1){
    cout << "Su numero es primo";
}
    return 0;
}
