#include "PessoaFisica.h"

PessoaFisica::PessoaFisica(){
}
PessoaFisica::~PessoaFisica(){
}
PessoaFisica::PessoaFisica(string nome, string CPF, string endereco){ //Método para pessoa Física.
    _nome = nome;
    _CPF = CPF;
    _endereco = endereco;
}
string PessoaFisica::get_nome(){
    return this-> _nome;
}
string PessoaFisica::get_CPF(){
    return this->_CPF;
}
string PessoaFisica::get_endereco(){
    return this->_endereco
}
string PessoaFisica::DadosCliente(){
    cout<< "Dados do Cliente"<<endl;
    cout<<"Nome dO cliente:"<<endl;
        cin>>_nome;
        cout<<"CPF:"<<endl;
        cin>>_CPF;
        cout<<"Endereco do cliente:"<<endl;
        cin>>_endereco;
        cout<<endl;
        cout<<"Nome do cliente: "<< _nome<<endl;
        cout<<"CPF: "<< _CPF<<endl;
        cout<<"Endereco: "<< _endereco<<endl;
}
