#include "DtConsulta.h"

DtConsulta::DtConsulta(){
    this->nombre="Default Nombre";
    this->genero="Default Genero";
    this->peso=0.0;
    this->racionDiaria=0.0;
}

DtConsulta::getNombre(){
    return this->nombre;
}

DtConsulta::getGenero(){
    return this->genero;
}

DtConsulta::getPeso(){
    return this->peso;
}

DtConsulta::getRacionDiaria(){
    return this->racionDiaria;
}

DtConsulta::~DtConsulta(){
    
}