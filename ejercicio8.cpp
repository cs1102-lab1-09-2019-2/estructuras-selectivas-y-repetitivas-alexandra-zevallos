#include <iostream>

using namespace std;

double puntaje_alessia(int a, int c) {
  double puntaje_1, puntaje_2;
  puntaje_1 = (3*a) / 10;
  puntaje_2 = a - ((a / 250) * c);
  if(puntaje_1 > puntaje_2) 
    return puntaje_1;
  else
    return puntaje_2;
}

double puntaje_jazmin(int b, int d) {
  double puntaje_3, puntaje_4;
  puntaje_3 = (3*b) / 10;
  puntaje_4 = b - ((b / 250) * d);
  if(puntaje_3 > puntaje_4) 
    return puntaje_3;
  else
    return puntaje_4;
}

void imprimir_resultado(double ale, double jaz) {
  if(ale > jaz)
    cout<< "Alessia";
  else if(jaz > ale)
    cout<< "Jazmin";
  else
    cout<< "Empate";
}

int main() {
  int a, b, c, d;
  double ale, jaz;
  do {
    cout<< "Puntos del problema de Alessia: ";
    cin>> a;
  } while(a <= 200 || a > 3500);
  do {
    cout<< "Puntos del problema de Jazmin: ";
    cin>> b;
  } while(b < 0 || b >= 3500);
  do {
    cout<< "Tiempo de Alessia: ";
    cin>> c;
  } while(c < 0 || c > 180);
  do {
    cout<< "Tiempo de Jazmin: ";
    cin>> d;
  } while(d < 0 || d >= 180);
  ale = puntaje_alessia(a, c);
  jaz = puntaje_jazmin(b, d);
  imprimir_resultado(ale, jaz);
  return 0;
}
