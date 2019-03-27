#include "Mascota.h"
#include "Genero.h"

#include <string>

using namespace std;

Mascota::Mascota(){
    
}

void Mascota::setNombre(string n){
    this->nombre=n;
}

string Mascota::getNombre(){
    return this->nombre;
}

void Mascota::setGenero(Genero g){
    this->genero=g;
}

Genero Mascota::getGenero(){
    return this->genero;
}

void Mascota::setPeso(float p){
    this->peso=p;
}

float Mascota::getPeso(){
    return this->peso;
}

float Mascota::obtenerRacionDiaria(){
    // Realizar el calculo debido.
    
    return 0;
}

Mascota::~Mascota(){
    
}
