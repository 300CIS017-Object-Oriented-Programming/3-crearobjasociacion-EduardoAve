//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"
using namespace std;

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario * pVeterinario;
    Raza * pRaza;

public:
    Perro();
    Perro(int edad, string nombre, string raza, string tamanio, string color);
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();
    Veterinario * getVeterinario();
    Raza * getRaza();

    // Sirve para.......
    void agregarPropietario(std::string nombre, std::string docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);

    void asignarVeterinario(string nombre, int aniosExperiencia);

    void asignarRaza(Raza* raza);


    int getEdad();
    void setEdad(int edad);
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif
