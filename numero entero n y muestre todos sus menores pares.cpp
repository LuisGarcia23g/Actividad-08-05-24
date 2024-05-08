//numero entero n y enseñe todos sus menores pares
#include <iostream>
using namespace std;
int main () 
{

int n=0, i=0;

cout << "Ingrese un numero entero: ";
cin >> n;


for (i=0; i<n; i=i+2)
{
cout << i << "\n";
}
    
    return 0;

}