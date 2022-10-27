#include <iostream>
#include "Ponto.h"
#include "Retangulo.h"


using namespace std;

int main() {
    cout << endl << " --- FT3 | 1 :: Classe Ponto ---" << std::endl;

    Ponto p1 {1,2}; // 1, 1
    cout << p1.getAsString();

    Ponto p2(3,4);  // 1, 4
    cout << p2.getAsString();

    cout << endl << "Distância: " << p1.calculaDistancia(p2) << endl;

    const Ponto pc(5,6);
    cout << pc.getAsString();
    cout << pc.obtemPontoX();

    Ponto p3[] {{1,3},{2,4}, {5,7} };

    Ponto p4;
    cout << p4.getAsString();

    //cout << endl << " --- FT3 | 2 :: Classe Triângulo ---" << std::endl;
    //Triangulo t1 {{1,2},{2,3},{3,4},"triangulo 1"};
    //cout << endl << t1.obtemNome();
/*
    Ponto p5 {5, 9};
    Retangulo r1{p5, 10, 5};
    cout << r1.getAsString() << endl;

    Retangulo r2{p5, 12, 8};
    cout << r2.getAsString() << endl;

    r1.moveTo(2,4);

    cout <<"R1: " << r1.getAsString() << endl;
    cout << "R2: " << r2.getAsString() << endl;
*/
    return 0;
}
