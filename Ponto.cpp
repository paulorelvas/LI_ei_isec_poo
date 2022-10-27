#include "Ponto.h"
#include <string>
#include <sstream>
#include <iostream>
#include <math.h>

using namespace std;
Ponto::Ponto(){
    cout << endl << " -- Construtor por omissão --" << endl;
    this->x = 0;
    this->y = 0;
}
Ponto::Ponto(int x, int y): x(x), y(y){
    cout << endl << " -- Construtor Ponto --" << this->getAsString() << endl;
}
Ponto::~Ponto(){
    cout << endl << " -- Destrutor Ponto --" << this->getAsString() <<endl;
}
/*Ponto::Ponto(const Ponto &p){
    cout << endl << " -- Construtor Ponto por cópia --" << endl;
    this->x=p.obtemPontoX();
    this->y = p.obtemPontoY();
}*/

string Ponto::getAsString() const{
    ostringstream s;
    s << "Pontos(" << this->x << "/" << this->y << ")" << endl;
    return s.str();
}

int Ponto::calculaDistancia(Ponto p){
    return sqrt( pow(p.obtemPontoX()-this->obtemPontoX(), 2.0) + pow(p.obtemPontoY()-this->obtemPontoY(), 2.0) );
}
Ponto Ponto::obtemCoordenadas() const{
    return Ponto(this->obtemPontoX(), this->obtemPontoY());
}

int Ponto::obtemPontoX() const {
    return this->x;
}
int Ponto::obtemPontoY() const{
    return this->y;
}
void Ponto::alteraPontoXY(int x, int y){
    this->x = x;
    this->y = y;
}
void Ponto::alteraPontoX(int val){
    this->x = val;
}
void Ponto::alteraPontoY(int val){
    this->x = val;
}
void Ponto::alteraPontoXY(Ponto p){
    this->x = p.obtemPontoX();
    this->y = p.obtemPontoY();
}

Ponto Ponto::somaPontoXY(int x, int y){
    return Ponto(this->x +=x, this->y +=y);
}



