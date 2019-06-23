#ifndef _PLANO_H
#define _PLANO_H

#include <string>
#include <iostream>
#include "Cliente.h"
#include "Celular.h"
#include "Date.h"

using namespace std;

class Plano{
protected:
    string _nomePlano;
    double _valorMin;
    double _velocidade;
    double _franquia;
    double _velocAlem;
public:
    Plano();
    Plano(string nomePlano, double valorMin, double velocidade, double franquia, double velocAlem);
    ~Plano();
    virtual string set_NomeDoPlano();
    void set_ValoresDoPlano(string _nomePlano);
    string get_Nome();
    double get_Valor();
    double get_Velocidade();
    double get_franquia();
    double get_Velocalem();
};
#endif // _PLANO_H
