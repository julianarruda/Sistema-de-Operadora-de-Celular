#include "Date.h"

Date::Date(){
    this->dia=0;
    this->mes=0;
    this->ano=0;
    this->hora=0;
    this->minuts=0;
};

Date::Date(unsigned int _dia, unsigned int _mes, unsigned int _ano, unsigned int _hora, unsigned int _minuts){
    this->dia=_dia;
    this->mes=_mes;
    this->ano=_ano;
    this->hora=_hora;
    this->minuts=_minuts;
};

Date::~Date(){
};

void Date::diadomes(unsigned int _dia){
    this->dia=_dia;
};

unsigned int Date::get_diadomes(){
    return this->dia;
};
