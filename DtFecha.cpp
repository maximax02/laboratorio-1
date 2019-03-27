#include "DtFecha.h"

DtFecha::DtFecha(){
    this->dia=01;
    this->mes=01;
    this->anio=1900;
}

DtFecha::DtFecha(int d, int m, int a){
    this->dia=d;
    this->mes=m;
    this->anio=a;
}

int DtFecha::getDia(){
    return this->dia;
}

int DtFecha::getMes(){
    return this->mes;
}

int DtFecha::getAnio(){
    return this->anio;
}

DtFecha::~DtFecha(){
    
}
