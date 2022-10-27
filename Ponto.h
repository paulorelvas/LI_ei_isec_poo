#include <string>
using namespace std;

#ifndef PONTO_PONTO_H
#define PONTO_PONTO_H

class Ponto {
    private:
        int x;
        int y;
    public:
        Ponto();
        Ponto(int x, int y);
        ~Ponto();

        //Ponto(const Ponto & p);
        string getAsString() const;
        //int calculaDistancia(Ponto & p);
        int calculaDistancia(Ponto p);
        Ponto obtemCoordenadas() const;
        int obtemPontoX() const;
        int obtemPontoY() const;
        void alteraPontoX(int val);
        void alteraPontoY(int val);
        void alteraPontoXY(int x, int y);
        void alteraPontoXY(Ponto p);
        Ponto somaPontoXY(int x, int y);

};

#endif //PONTO_PONTO_H
