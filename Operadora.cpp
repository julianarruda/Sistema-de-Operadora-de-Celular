#include "Operadora.h"

Cliente::Cliente(string pais[4], string DataCadastro[4]){
    int i,j;
    for(i= 1; i<4; i++){
        for(j = 1; j<4; j++){
            cout<< "Insira pais de origem do Cliente: ";
            cin>>pais[i];
            cout<<"Insira a data de Cadastro do Cliente: ";
            cin>> DataCadastro[i];
            cout<<"************************************************************************************************************************"<<endl;
            cout<< "             Dados Cliente " <<endl;
            cout<< "O pais do cliente Cadastrado e: "<< pais[i] <<endl;
            cout<<"A Data de Cadastro do Cliente e: "<< DataCadastro[i]<<endl;
            cout<<endl;
        }

    }
}
