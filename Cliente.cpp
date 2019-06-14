#include "Cliente.h"

Cliente::Cliente(){
}
Cliente::Cliente(string Pais[MAX], string Data[MAX]){ //Método para inserir o pais e a Data de Cadastro do cliente.
    _Pais[MAX] = Pais[MAX];
    _Data[MAX] = Data[MAX];
}

string Cliente::get_Pais(){
    return this->_Pais[MAX];
}
string Cliente::get_Data(){
    return this->_Data[MAX];
}

string Cliente::DadosCliente(){
    int i;
    for(i= 0; i<MAX; i++){
        cout<<"************************************************************************************************************************"<<endl;
        cout<< "Insira pais de origem do Cliente: ";
        cin>>_Pais[i];
        cout<<"Insira a data de Cadastro do Cliente: ";
        cin>> _Data[i];
        cout<<"************************************************************************************************************************"<<endl;
        cout<< "         Dados Cliente " << i <<endl;
        cout<< "Pais do cliente Cadastrado e: "<< _Pais[i] <<endl;
        cout<<"Data de Cadastro do Cliente e: "<< _Data[i]<<endl;
        cout<<endl;
}
