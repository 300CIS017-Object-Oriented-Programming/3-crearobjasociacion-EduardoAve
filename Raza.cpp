#include <iostream>
#include "Raza.h"

Raza::Raza(string nombre, string paisOrigen) : nombre(nombre), paisOrigen(paisOrigen) {}

string Raza::getNombre(){
    return nombre;
}

void Raza::setNombre(string nombre) {
    this->nombre = nombre;
}

string Raza::getPaisOrigen(){
    return paisOrigen;
}

void Raza::setPaisOrigen(string paisOrigen) {
    this->paisOrigen = paisOrigen;
}