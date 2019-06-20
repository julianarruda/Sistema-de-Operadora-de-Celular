#ifndef LIGACAO_H_
#define LIGACAO_H_
#include "Celular.h"
#include "Date.h"

#include <string>
#include <iostream>
#define MAX 1000
using namespace std;

class Ligacao{
protected:
    Date _datahora;
    double _duracao;
    const double _custo = 0.50;
public:
    Ligacao();
    ~Ligacao();
    void get_dataHora();
    double get_Duracao();
    void get_custo(); // Precisa???
};

class LigacaoDados: public Ligacao{
public:
    enum string TipoDados {
        download,
        upload
    };
    LigacaoDados();
    LigacaoDados(string tipo);
    int get_TipoDados();
    void set_TipoDados();

};

class LigacaoSimples: public Ligacao{
private:
    double _numTelefone;
public:
    LigacaoSimples();
    LigacaoSimples(double numero);
    ~LigacaoSimples();
    double get_numTelefone();
    void set_numTelefone();
};


#endif // LIGACAO_H_
