//
// Created by Paulo Relvas on 19/10/2022.
//

#include "Retangulo.h"
#include "Ponto.h"
#include <iostream>
#include <sstream>

using namespace std;

Retangulo::Retangulo(Ponto pt, int larg, int alt): pt(pt), largura(larg), altura(alt){
    cout << "--- Construindo Retangulo ---" << endl;
}
Retangulo::~Retangulo(){
    cout << "--- Destruindo Retangulo ---" << endl;
}

string Retangulo::getAsString() const{
    ostringstream s;
    s << "Pontos Retangulo(" << this->pt.obtemPontoX() << "/" << this->pt.obtemPontoY() << ")" << endl;
    return s.str();
}
ostream& operator<<(ostream& out, const Ponto& p)
{
    out << " is at " << p.obtemCoordenadas();
    return out;
}

void Retangulo::moveTo(int x, int y)
{
    pt.alteraPontoXY(x, y);
}