#include <iostream>
#include "Perro.h"
#include "Propietario.h"

using namespace std;

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    Perro* miPerro = new Perro(3, "Bobby", "Labrador", "Grande", "Café");
    miPerro->ladrar();

    Propietario* miPropietario = new Propietario(21);
    miPropietario->setNombre("Eduardo");
    miPropietario->setDocIdentidad("123456789");
    cout << miPropietario->mostrarInfo() << endl;
    
    miPerro->agregarPropietario("Eduardo", "123456789");
    cout << "Documento de identidad del propietario del perro: " << miPerro->getPropietario()->getDocIdentidad() << endl;

    return 0;
}
