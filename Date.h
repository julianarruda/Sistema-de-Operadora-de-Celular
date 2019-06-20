#ifndef _DATE_H
#define _DATE_H

#include <iostream>
using namespace std;

class Date{
private:
    unsigned int dia;
    unsigned int mes;
    unsigned int ano;
    unsigned int hora;
    unsigned int minuts;
public:
    Date();
    Date(unsigned int _dia, unsigned int _mes, unsigned int _ano, unsigned int _hora, unsigned int _minuts);
    ~Date();
    void diadomes(unsigned int _dia);
    unsigned int get_diadomes();
};
#endif // _DATE_H
