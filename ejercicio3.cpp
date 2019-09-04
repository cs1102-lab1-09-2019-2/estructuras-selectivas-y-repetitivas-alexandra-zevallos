#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int r, c, i = 0;
  vector <int> v;
  cout<< "Ingrese un numero entero positivo que representara la cantidad de datos que se ingresaran\n"<< "n: ";
  cin>> r;
  cout<< "Ahora ingrese los 'n' numeros: \n";
  while(i < r) {
    cin>> c;
    v.push_back(c);
    i++;
  }
  sort(v.begin(),v.end());
  cout<< "El maximo valor es "<< v[r-1];
