#include <iostream>

using std::cout;
using std::cin;

void tabla_info() {
  cout<< "Tipos de entrada\n";
  cout<< "1. Super Vip     precio 212\n";
  cout<< "2. Vip           precio 170\n";
  cout<< "3. Preferencial  precio 136\n";
  cout<< "4. General       precio 59\n";
}

float precio_final(int &t, char &c) {
  float precio_inicial, precio_final;
  switch(t) {
    case 1:
      precio_inicial = 212.0;
      break;
    case 2:
      precio_inicial = 170.0;
      break;
    case 3:
      precio_inicial = 136.0;
      break;
    case 4:
      precio_inicial = 59.0;
      break;
  }
  switch(c) {
    case 's':
    case 'S':
      precio_final = (precio_inicial * 80) / 100;
      break;
    case 'n':
    case 'N':
      precio_final = precio_inicial;
      break;
  }
  return precio_final;
}

int main() {
  int t;
  char c;
  float monto;
  tabla_info();
  do {
    cout<< "Seleccione el tipo de entrada: ";
    cin>> t;
  } while(t <= 0 || t > 4);
  do {
    cout<< "Es cliente claro <S, s, N, n> : ";
    cin>> c;
  } while(c != 's' && c != 'S' && c != 'n' && c != 'N');
  monto = precio_final(t,c);
  cout<< "Monto a pagar: "<< monto;
}
