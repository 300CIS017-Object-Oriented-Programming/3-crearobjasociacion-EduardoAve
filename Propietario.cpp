//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"
#include <iostream>

using namespace std;

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros

Propietario::Propietario(int edad){
    this->edad=edad;
}

Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

std::string Propietario::getNombre()  {
    return nombre;
}

string Propietario::getDocIdentidad(){
    return docIdentidad;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Propietario::setDocIdentidad(string docIdentidad){
    this-> docIdentidad = docIdentidad;
}

string Propietario::mostrarInfo() {
    return "Nombre: " + nombre + ", Documento de Identidad: " + docIdentidad + ", Edad: " + to_string(edad);
}