//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
using namespace std;

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(int edad);
    Propietario(std::string nombre, std::string docIdentidad);
    string mostrarInfo();
    std::string getNombre();
    string getDocIdentidad();
    void setNombre(std::string nombre);
    void setDocIdentidad(string docIdentidad);


};


#endif //PROPIETARIO_H
