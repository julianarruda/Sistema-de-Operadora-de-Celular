#ifndef _CLIENTE_H
#define _CLIENTE_H

#include <string>
#include <iostream>
using namespace std;

class Cliente{  //A classe cliente definirá os dados dos clientes cadastrados.
private:
    string _pais;
    string _DataCadastro;
public:
    Cliente(string pais, string DataCadastro);
    virtual string DadosCliente();
};
#endif // _CLIENTE_H
