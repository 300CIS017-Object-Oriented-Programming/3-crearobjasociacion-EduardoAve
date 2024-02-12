#include "Perro.h"
#include <iostream>
using namespace std;

// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
    this->nombre = "";
}

Perro::Perro(int edad, string nombre, string raza, string tamanio, string color): edad(edad) , nombre(nombre), raza(raza), tamanio(tamanio),color(color){}

void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(string nombre, string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}

void Perro::asignarVeterinario(string nombre, int aniosExperiencia) {
    this-> pVeterinario = new Veterinario(nombre, aniosExperiencia);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}

void Perro::asignarRaza(Raza* raza) {
    pRaza = raza;
}

Propietario *Perro::getPropietario() {
    return this->pPropietario;
}

Veterinario* Perro::getVeterinario() {
    return this->pVeterinario;
}

Raza * Perro::getRaza(){
    return this->pRaza;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}


void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}




