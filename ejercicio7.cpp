#include <iostream>

using namespace std;

bool comprobacion_soat(int n) {
  int soat;
  soat = n / 1000;
  soat = soat % 10;
  if(soat % 2 == 0)
    return true;
  else
    return false;
}

bool comprobacion_citv(int n) {
  int citv;
  citv = n / 100;
  citv = citv % 10;
  if(citv % 2 == 0)
    return true;
  else
    return false;
}

bool comprobacion_autorizacion(int n) {
  int autorizacion;
  autorizacion = n % 100;
  if(autorizacion % 3 == 0)
    return true;
  else
    return false;
}

void imprimir(int n) {
  if(comprobacion_soat(n))
    cout<< "SOAT: Vigente\n";
  else
    cout<< "SOAT: Vencido\n";
  if(comprobacion_citv(n))
    cout<< "CITV: Vigente\n";
  else
    cout<< "CITV: Vencido\n";
  if(comprobacion_autorizacion(n))
    cout<< "AUTORIZADO: Si\n";
  else
    cout<< "AUTORIZADO: No\n";
}

int main() {
  int n;
  do {
    cout<< "Ingrese el numero entero de 8 digitos: ";
    cin>> n;
  } while(n < 11111111 || n > 99999999);
  imprimir(n);
  return 0;
}
