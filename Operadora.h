#ifndef OPERADORA_H_
#define OPERADORA_H_

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Cliente{
private:
    string nome;
    string CPF;
    string endereco;
    vector <int>Celular;
public:
    Cliente(string nome, sting CPF, string endereco);
    virtual string DadosCliente();
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
    Val;
};

class PosPago : public Plano{
private:
    Vencimento;

};

class Ligacao: public Celular{
private:
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
