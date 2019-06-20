#ifndef _CELULAR_H
#define _CELULAR_H

#include <string>
#include <iostream>
#include "Cliente.h"
#include "Plano.h"

using namespace std;

class Celular{  //A classe
private:
    double _numero //Variável para o numero do cliente.
    Cliente _cliente; //Variável para o cliente.
public:
    Celular();
    Celular(double numero, Cliente client);
    ~Celular();
    void get_numero();
    void get_cliente();
    void set_numero();
    void set_cliente();
    Plano _plano;
    vector<Ligacao> _ligacao;
    static double proxNumCelular;  // Tem que fazer algo aqui pra somar 1 quando tiver um novo numero
   };
#endif // _CELULAR_H
