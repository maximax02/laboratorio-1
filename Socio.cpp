#include "Socio.h"

Socio::Socio(){
    this->ci="Default CI";
    this->nombre="Default Nombre";
    this->FechaIngreso->DtFecha();
}

Socio::Socio(string c, string n, DtFecha f){
    this->ci=c;
    this->nombre->n;
    this->FechaIngreso->f;
}

Socio::setCI(string c){
    this->ci=c;
}

Socio::getCI(){
    return this->ci;
}

Socio::setNombre(string n){
    this->nombre=n;
}

Socio::getNombre(){
    return this->nombre;
}

Socio::setFechaIngreso(DtFecha f){
    this->FechaIngreso=f;
}

Socio::getFechaIngreso(){
    return this->FechaIngreso;
}

Socio::~Socio(){
    
}