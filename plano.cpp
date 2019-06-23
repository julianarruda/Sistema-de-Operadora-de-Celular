#include "Plano.h"
#include "time.h'
Plano::Plano(string nomePlano[MAX]){ //Método para inserir o pais e a Data de Cadastro do cliente.

    _nomePlano[MAX]= nomePlano[MAX];
    set_ValoresDoPlano();
}

Plano:: ~Plano(){
cout<< "deletando Plano" << endl;
}

void Cliente:: set_ValoresDoPlano(){
cout<< "Insira o valor a ser cobrado por ligação:";
cin>> _ValorMin;

cout<<"Insira a velocidade associada ao plano: ";
cin>> _Velocidade;

cout<<"Insira o tipo de franquia: ";
cin>> _franquia;

cout<<"Insira a velocidade além da franquia: ";
cin>> _VelocAlem;

};


PrePago:: PrePago (string _nomePlano[MAX], double credito, Date validade){
_nomePlano[MAX]= nomePlano[MAX];
_credito= credito;
_validade= validade;
set_ValoresDoPlano();
}

PrePago:: ~PrePago(){
cout<< "deletando Plano PrePago" << endl;
}

void PrePago::add_credito(int numero_celular, int valor){
celular.v+=valor;
time_t tempo = time(NULL);
 time_t rawtime;
   struct tm *info;
   time( &rawtime );
   info = localtime( &rawtime );
_validade+= (*info)+180;  //https://www.tutorialspoint.com/c_standard_library/c_function_localtime.htm
}

double PrePago:: get_credito(int numero_celular){
return numero_celular.credito;
}
string PrePago:: get_validade(int numero_celular){
return numero_celular.validade;
}





PosPago::PosPago(string _nomePlano[MAX],Date vencimento){
_nomePlano[MAX]= nomePlano[MAX];
_Vencimento= vencimento;
set_ValoresDoPlano();
}

PosPago:: ~PosPago(){
cout<< "deletando Plano PosPago" << endl;
}

void PosPago::get_vencimento(){
return this -> vencimento;
}

