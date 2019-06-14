#ifndef _CLIENTE_H
#define _CLIENTE_H

#include <string>
#include <iostream>
#define MAX 1000
using namespace std;

class Cliente{  //A classe cliente definirá os dados dos clientes cadastrados.
private:
    string _Pais[MAX]; //Variável para o Pais de origem do cliente.
    string _Data[MAX]; //Variável pata a Data de Cadastro do Cliente.
public:
    Cliente();
    Cliente(string Pais[MAX], string Data[MAX]);
    string get_Pais();
    string get_Data();
    virtual string Dados_Cliente();//Permite que os dados do cliente sejam inseridos para cadastro.
};
#endif // _CLIENTE_H
