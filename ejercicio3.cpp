#include <iostream>

using namespace std;

int main() {
  int r, c, mayor = 0, i = 0;
  cout<< "Ingrese un numero entero positivo que representara la cantidad de datos que se ingresaran\n"<< "n: ";
  cin>> r;
  cout<< "Ahora ingrese los 'n' numeros: \n";
  while(i < r) {
    cin>> c;
    if(c > mayor)
      mayor = c;
    else
      mayor = mayor;
    i++;
  }
  cout<< "El maximo valor es "<< mayor;
}
