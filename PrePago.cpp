#include "PrePago.h"
#include "Celular.h"

PrePago::PrePago(){
}
PrePago:: ~PrePago(){
}

PrePago:: PrePago (double credito, Date validade){
    _credito = credito;
    _validade = validade;
}
string set_NomeDoPlano(){
    cout<<"Qual o nome do plano Pre-Pago: "<< endl;
    cin>>_nomePlano;
    cout<<"Nome do Plano: "<< _nomePlano<< endl;
}
void PrePago::add_credito(int numero_celular, int valor){
    celular.v+=valor;
    time_t tempo = time(NULL);
    time_t rawtime;
    struct tm *info;
    time( &rawtime );
    info = localtime( &rawtime );
    _validade+= (*info)+180;
}

double PrePago:: get_credito(){
    return this-> _credito;
}
Date PrePago:: get_validade(){
    return this->validade;
}
