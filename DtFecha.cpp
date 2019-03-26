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

DtFecha::getDia(){
    return this->dia;
}


DtFecha::getMes(){
    return this->mes;
}


DtFecha::getAnio(){
    return this->anio;
}

DtFecha::~DtFecha(){
    
}
