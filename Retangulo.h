//
// Created by Paulo Relvas on 19/10/2022.
//

#include "Ponto.h"

using namespace std;
#ifndef PONTO_RETANGULO_H
#define PONTO_RETANGULO_H

class Retangulo {
private:
    unsigned int largura;
    unsigned int altura;
    Ponto pt;

public:
    Retangulo(Ponto pt, int larg, int alt);
    ~Retangulo();

    void moveTo(int x, int y);
    string getAsString() const;
    friend ostream& operator<<(ostream& out, const Ponto& p);
};


#endif //PONTO_RETANGULO_H
