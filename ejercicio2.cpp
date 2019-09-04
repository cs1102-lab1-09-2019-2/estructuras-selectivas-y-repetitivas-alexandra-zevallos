#include <iostream>

using std::cout;
using std::cin;

void imprimir(int &n) {
  int d = 1;
  for(int f = 1; f <= n; f++) {
    for(int c = 1; c <= n; c++) {
      if(f == 1 || f == n)
        cout<< "*";
      else {
        if(c == 1 || c == n || c == d)
          cout<< "*";
        else 
          cout<< " ";
      }
    }
    d++;
    cout<< "\n";
  }
}

int main() {
  int n;
  cout<< "Ingrese un numero entero positivo: ";
  cin>> n;
  imprimir(n);
}
