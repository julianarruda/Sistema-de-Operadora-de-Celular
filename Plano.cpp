#include "Plano.h"
#include "time.h"

Plano::Plano(){
}
Plano::Plano(string nomePlano, double valorMin, double velocidade, double franquia, double velocAlem){
    _nomePlano = nomePlano;
    _valorMin = valorMin;
    _velocidade = velocidade;
    _franquia = franquia;
    _velocAlem = velocAlem;

}
Plano:: ~Plano(){
}
string Plano::set_NomeDoPlano(){
    int t;
    cout<< "Escolha o tipo do plano: (1)Pre-Pago e (2)Pos-pago"<<endl;
    if(t=1){
        cout<<"Planos disponiveis: "<<endl;
        cout<< "*Pre-Pago Controle"<<endl;
        cout<< "*Pre-Pago Standart"<<endl;
        cout<< "*Pre-Pago Turbo"<<endl;
        cin>>_nomePlano;
        cout<<"O plano cadastrado para esse cliente e: "<<_nomePlano<<endl;
    }
    else if(t=2){
        cout<<"Planos disponiveis: "<<endl;
        cout<< "*Pos-Pago Controle"<<endl;
        cout<< "*Pos-Pago Premium"<<endl;
        cout<< "*Pos-Pago Controle"<<endl;
        cin>>_nomePlano;
        cout<<"O plano cadastrado para esse cliente e: "<<_nomePlano<<endl;
    }
    else
        cout<<"Tipo de plano indisponível"<<endl;
}

void Cliente::set_ValoresDoPlano(){
    cout<< "Insira o valor a ser cobrado por ligação:";
    cin>> _valorMin;
    cout<<"Insira a velocidade associada ao plano: ";
    cin>> _velocidade;
    cout<<"Insira o tipo de franquia: ";
    cin>> _franquia;
    cout<<"Insira a velocidade além da franquia: ";
    cin>> _velocAlem;
    cout<<"   Valores do Plano: "<<endl;
    cout<< "Valor do minuto: " << _valormin<<endl;
    cout<< "Valor da velocidade: " << _velocidade<<endl;
    cout<< "Valor da franquia: " << _franquia<<endl;
    cout<< "Valor da velocidade alem da franquia: " << _velocAlem<<endl;
};
string get_Nome(){
    return this-> _nomePlano;
}
double get_Valor(){
    return this->_valorMin;
}
double get_Velocidade(){
    return this->_velocidade;
}
double get_franquia(){
    return this->_franquia;
}
double get_Velocalem(){
    return this->_velocAlem;
}
