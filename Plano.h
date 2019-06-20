#ifndef _PLANO_H
#define _PLANO_H

#include <string>
#include <iostream>
#include "Cliente.h"
#include "Celular.h"

using namespace std;

class Plano{  //A classe
protected:
    string _nomePlano;
    double _ValorMin;
    double _franquia;
    double _franquia;
    double _VelocAlem;
    Plano();
    Plano(string NomePlano);
    ~Plano();
    void set_NomeDoPlano();
    void set_ValoresDoPlano(string _nomePlano);

};

class PrePago:public Plano{
public:
    double _credito;
    string _validade;
    PrePago();
    PrePago(double validade, string validade);
    ~PrePago();
    void add_credito();
    double get_credito();
    string get_validade();

};

class PosPago:public Plano{
public:
    string _validade;
    PosPago();
    PosPago(string validade);
    ~PosPago();
    string get_validade();

};

#endif // _PLANO_H
