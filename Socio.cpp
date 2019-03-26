#include <string.h>

#include "Socio.h"

using namespace std;

Socio::Socio(){
    this->ci="Default CI";
    this->nombre="Default Nombre";
    this->fechaIngreso=DtFecha();
}

Socio::Socio(string c, string n, DtFecha f){
    this->ci=c;
    this->nombre=n;
    this->fechaIngreso=f;
}

void Socio::setCI(string c){
    this->ci=c;
}

string Socio::getCI(){
    return this->ci;
}

void Socio::setNombre(string n){
    this->nombre=n;
}

string Socio::getNombre(){
    return this->nombre;
}

void Socio::setFechaIngreso(DtFecha f){
    this->fechaIngreso=f;
}

DtFecha Socio::getFechaIngreso(){
    return this->fechaIngreso;
}

Socio::~Socio(){
    
}
