#ifndef OPERADORA_H_
#define OPERADORA_H_

#include <string>
#include <iostream>
#include <vector>
#define MAX 100
using namespace std;

class Cliente{
private:
    string pais[MAX];
    string DataCadastro[MAX];
public:
    Cliente(string pais[MAX], string DataCadastro[MAX]);
};

class PessoaFisica: public Cliente{
private:
    string nome;
    string sobrenome;
    string CPF;
    string endereco;
    vector <Celular>C;
public:
    PessoaFisica(string nome, sting CPF, string endereco, vector<Celular>C);
    virtual string DadosCliente();

};
class PessoaJuridica: public Cliente{
private:
    string nomeEmpresa;
    string sigla;
    string CNPJ;
    vector <Celular>Cel;
public:
    PessoaJuridica(string nomeEmpresa, string sigla, string CNPJ, vector<Celular>Cel);

};

class Celular{
private:
    double numero;
    Cliente c;
    Plano p;
    vector<Ligacao>ligacoes;
public:
    Celular(double numero, Cliente c, Plano p);

};

class Plano{
private:
    string nomePlano;
    double Valorminuto;
    double V; //velocidade da franquia.
    double Franquia;
    double VAlem;// velocidade além da franquia.
public:
    Plano();
    DadosPlano();
};

class PrePago : public Plano{
private:
    double credito;
    Date validade;
};

class PosPago : public Plano{
private:
    Date vencimento;

};

class Ligacao: public Celular{
private:
    Date dataHora;
    double duracao;
    double custo;
};

class LigacaoDados:public Ligacao{
private:

public:
};
class LigacaoSimples:public Ligacao{
private:
    double NumTel;
public:
};

#endif // OPERADORA_H_
