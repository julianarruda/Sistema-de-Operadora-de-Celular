#ifdef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Cliente.h"
#include <vector>

class PessoaJuridica: public Cliente{
protected:
    string nomeEmpresa;
    string sigla;
    string CNPJ;
    vector <Celular>Cel;
public:
    PessoaJuridica();
    ~PessoaJuridica();
    string get_nomeEmpresa();
    string get_sigla();
    string get_CNPJ();
    PessoaJuridica(string nomeEmpresa, string sigla, string CNPJ);
    string DadosCliente();
};
