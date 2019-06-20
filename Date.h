#ifndef _DATE_H
#define _DATE_H
#include <string>
#include <iostream>
using namespace std;

class Date{
    unsigned int dia;
    unsigned int mes;
    unsigned int ano;
    unsigned int hora;
    unsigned int minuts;
public:
    Date();
    Date(unsigned int dia, unsigned int mes, unsigned int ano, unsigned int hora, unsigned int minuts);
    ~Date();
    void data();
    void hora();
}
#endif // _DATE_H
