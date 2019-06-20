#ifndef _PLANO_H
#define _PLANO_H

#include <string>
#include <iostream>
#include "Cliente.h"
#include "Celular.h"
#include "Date.h"

using namespace std;

class Plano{  //A classe
protected:
    string _nomePlano;
    double _ValorMin;
    double _Velocidade;
    double _Franquia;
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
    Date _validade;
    PrePago();
    PrePago(double credito, Date validade);
    ~PrePago();
    void add_credito();
    double get_credito();
    void get_validade();

};

class PosPago:public Plano{
public:
    Date _vencimento;
    PosPago();
    PosPago(Date vencimento);
    ~PosPago();
    void get_vencimento();
};

#endif // _PLANO_H
