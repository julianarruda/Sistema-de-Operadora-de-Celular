#ifndef PESSOAFISICA_H_
#define PESSOAFISICA_H_

#include<vector>
#include "Cliente.h"

class PessoaFisica: public Cliente{ //Faz o cadastro de pessoa fisica.
protected:
    string _nome;
    string _CPF;
    string _endereco;
    vector <Celular>C;
public:
    PessoaFisica();
    PessoaFisica(string nome, sting CPF, string endereco);
    ~PessoaFisica();
    string get_nome();
    string get_CPF();
    string get_endereco();
    string DadosCliente(); //Insere os dados do cliente de pessoa fisica.
};

#endif // PESSOAFISICA_H_
