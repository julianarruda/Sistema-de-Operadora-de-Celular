#include "Celular.h"

Celular::Celular(double numero, Cliente client){

    _numero= numero;
    _cliente= client;
    set_ValoresDoPlano();
}

Celular:: ~Celular(){
cout<< "deletando Celular" << endl;
}


void Celular:: get_numero(Cliente Cli){ //Pensei em fazer uma composição de celular e cliente para conseguir acessar.
    return Cli->Celular;
}
void Celular:: get_cliente(Celular cel){//vice versa. So um esboço.
    return cel-> Cliente;
}
void Celular:: set_numero(int num){
    _numero=num;
}
void Celular:: set_cliente(Cliente cli){
    _cliente=cli;
}

static int Celular::proxNumCelular(){// pensei em começar do numero 9000-0000(um só int), sendo incrementado a cada nova chamada da função.
static int j=0;
int aux=90000000+j;
j++;
return aux;
}

