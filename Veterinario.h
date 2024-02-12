#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
using namespace std;

class Veterinario {
private:
    string nombre;
    int aniosExperiencia;

public:
    Veterinario(string nombre, int aniosExperiencia);
    string getNombre();
    void setNombre(string nombre);
    int getAniosExperiencia();
    void setAniosExperiencia(int aniosExperiencia);
};

#endif // VETERINARIO_H


