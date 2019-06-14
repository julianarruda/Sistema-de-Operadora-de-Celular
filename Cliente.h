#ifndef _CLIENTE_H
#define _CLIENTE_H

#include <string>
#include <iostream>
using namespace std;

class Cliente{  //A classe cliente definirá os dados dos clientes cadastrados.
private:
    string _Pais;
    string _DataCadastro;
public:
    Cliente(string Pais, string DataCadastro);
    string get_Pais();
    string get_Data();
    virtual string Dados_Cliente();//Permite que os dados do cliente sejam inseridos para cadastro.
};
#endif // _CLIENTE_H
