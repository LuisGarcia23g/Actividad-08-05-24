//menu con do
#include <iostream>
using namespace std;
int main () 
{
    //Variables
char letra;

do
{
cout << "Escoja una letra para el almuerzo (elijala en mayuscula): \n";
 cout << "A. Hamburguezas\n";
    cout << "B. Pizza\n";
    cout << "C. Tortas\n";
        cout << "D. Sopa de tortilla\n";
    cout << "E. Pollo frito\n";
    cout << "Almuerzo elegido: ";
    cin >> letra; 
}
    
while (letra != 'X' && letra != 'x');
     
return 0;
} 