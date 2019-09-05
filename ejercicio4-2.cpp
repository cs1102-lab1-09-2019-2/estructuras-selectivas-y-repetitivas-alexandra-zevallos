#include <iostream>

using namespace std;

void tabla_seguros() {
  cout<< " Tipo | Max. Personas | Pago Mensual\n";
  cout<< "-------------------------------------\n";
  cout<< "  A   |       8       |  S./ 40.00 \n";
  cout<< "  B   |       6       |  S./ 30.00 \n";
  cout<< "  C   |       4       |  S./ 20.00 \n";
  cout<< "  D   |       2       |  S./ 10.00 \n\n";
}

int pago_mensual(char t, int n) {
  int pago_final;
  switch(t) {
    case 'A':
      if(n == 8)
        pago_final = 40;
      else {
        n-= 8;
        pago_final = 40 + n*7;
      }
      break;
    case 'B':
      if(n == 6)
        pago_final = 30;
      else {
        n-= 6;
        pago_final = 30 + n*7;
      }
      break;
    case 'C':
      if(n == 4)
        pago_final = 20;
      else {
        n-= 4;
        pago_final = 20 + n*3;
      }
      break;
    case 'D':
      if(n == 2)
        pago_final = 10;
      else {
        n-= 2;
        pago_final = 10 + n*3;
      }
      break;
  }
  return pago_final;
}

int main() {
  char t;
  int n, monto_mensual;
  tabla_seguros();
  do {
    cout<< "Tipo de seguro: ";
    cin>> t;
  } while(t != 'A' && t != 'B' && t != 'C' && t != 'D');
  do {
    cout<< "Cantidad de asegurados: ";
    cin>> n;
  } while(n <= 0);
  monto_mensual = pago_mensual(t,n);
  cout<< "Monto mensual S/. "<< monto_mensual<< "\n";
}
