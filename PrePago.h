#ifndef PREPAGO_H_
#define PREPAGO_H_

#include "Plano.h"
#include "Date.h"

class PrePago:public Plano{
public:
    double _credito;
    Date _validade;
    PrePago();
    PrePago(double credito, string validade);
    ~PrePago();
    string set_NomeDoPlano();
    void add_credito();
    double get_credito();
    Date get_validade();
};

#endif // PREPAGO_H_
