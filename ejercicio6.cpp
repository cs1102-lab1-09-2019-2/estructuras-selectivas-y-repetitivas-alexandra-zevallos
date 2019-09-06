#include <iostream>

using namespace std;

void imprimir(int n) {
  for(int f = 1; f <= n; f++) {
    for(int c = 1; c <= n; c++) {
      if(f % 2 != 0) {
        if(c % 2 != 0)
          cout<< " #";
        else 
          cout<< " @";
      }
      else {
        if(c % 2 == 0)
          cout<< " #";
        else 
          cout<< " @";
      } 
    }
    cout<< "\n";
  }
}

int main() {
  int n;
  cout<< "Ingrese un numero entero positivo: ";
  cin>> n;
  cout<< "\n";
  imprimir(n);
  return 0;
}
