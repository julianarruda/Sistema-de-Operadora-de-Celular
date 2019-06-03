#include "Operadora.h"

Cliente::Cliente(string pais[MAX], string DataCadastro[MAX]){
    int i;
    for(i= 0; i<2; i++){
        cout<<"************************************************************************************************************************"<<endl;
        cout<< "Insira pais de origem do Cliente: ";
        cin>>pais[i];
        cout<<"Insira a data de Cadastro do Cliente: ";
        cin>> DataCadastro[i];
        cout<<"************************************************************************************************************************"<<endl;
        cout<< "         Dados Cliente " << i <<endl;
        cout<< "Pais do cliente Cadastrado e: "<< pais[i] <<endl;
        cout<<"Data de Cadastro do Cliente e: "<< DataCadastro[i]<<endl;
        cout<<endl;
    }
}
