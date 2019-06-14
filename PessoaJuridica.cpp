#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica(){
}
PessoaJuridica::~PessoaJuridica(){
}
PessoaJuridica::PessoaJuridica(string nomeEmpesa, string sigla, string CNPJ){
    _nomeEmpresa = nomeEmpresa;
    _sigla = sigla;
    _CNPJ = CNPJ;
}
string PessoaJuridica::get_nomeEmpresa(){
    return this-> _nomeEmpresa;
}
string PessoaJuridica::get_sigla(){
    return this-> _sigla;
}
string PessoaJuridica::get_CNPJ(){
    return this->_CNPJ;
}
string PessoaJuridica::Dados_Cliente(){
    cout<<"                  Dados Cliente - Pessoa Juridica"<<endl;
        cout<<"Nome da Empresa:"<<endl;
        cin>>_nomeEmpresa;
        cout<<"Sigla:"<<endl;
        cin>>_sigla;
        cout<<"CNPJ:"<<endl;
        cin>>_CNPJ;
        cout<<endl;
        cout<<"Nome da empresa: "<< _nomeEmpresa<<endl;
        cout<<"Sigla: "<< _sigla<<endl;
        cout<<"CNPJ: "<< _CNPJ<<endl;
    
}
