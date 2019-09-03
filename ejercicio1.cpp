#include <iostream>
#include <string>

using namespace std;

float calcularPromedio() {
    float PC1, PC2, PC3, PC4, P, E1, E2;
    float promedio;
    do {
        cout<< "Practica 1: ";
        cin>> PC1;
    } while(PC1 < 0 || PC1 > 20);
    do {
        cout<< "Practica 2: ";
        cin>> PC2;
    } while(PC2 < 0 || PC2 > 20);
    do {
        cout<< "Practica 3: ";
        cin>> PC3;
    } while(PC3 < 0 || PC3 > 20);
    do {
        cout<< "Practica 4: ";
        cin>> PC4;
    } while(PC4 < 0 || PC4 > 20);
    do {
        cout<< "Proyecto: ";
        cin>> P;
    } while(P < 0 || P > 20);
    do {
        cout<< "Examen 1: ";
        cin>> E1;
    } while(E1 < 0 || E1 > 20);
    do {
        cout<< "Examen 2: ";
        cin>> E2;
    } while(E2 < 0 || E2 > 20);
    promedio = 0.05*PC1 + 0.1*PC2 + 0.1*PC3 + 0.15*PC4 + 0.2*P + 0.2*E1 + 0.2*E2;
    return promedio;
}

string lista_eventos(float &promedio_alumno) {
    string evento;
    if (18.0 <= promedio_alumno && promedio_alumno <= 20.0)
        evento = "ACM - ICPC International Collegiate Programming Contest";
    if (15.0 <= promedio_alumno && promedio_alumno <= 17.99)
        evento = "Imagine Cup";
    if (12.0 <= promedio_alumno && promedio_alumno <= 14.99)
        evento = "Hackaton de Miraflores";
    if (promedio_alumno < 12.0)
        evento = "necesita mejorar";
    return evento;
}

int main() {
    int contador = 0, num_alumnos;
    float promedio_alumno;
    string evento_alumno;
    do {
        cout<< "Numero de estudiantes: ";
        cin>> num_alumnos;
     } while(num_alumnos < 3 || num_alumnos > 30);
    do {
        cout<< "Alumno numero "<< contador+1<< "\n\n";
        promedio_alumno = calcularPromedio();
        cout<< "Su promedio es "<< promedio_alumno<<"\n";
        evento_alumno = lista_eventos(promedio_alumno);
        if(12 < promedio_alumno && promedio_alumno <= 20)
          cout<< "Ud. asistira a "<< evento_alumno<< "\n\n";
        else
          cout<< "Ud. "<< evento_alumno<< "\n\n";
        contador++;
    } while(contador < num_alumnos);
 }
