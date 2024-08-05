#include <iostream>
using namespace std;

void intercambiarJugos(float& naranja, float& manzana){
    float aux = naranja;
    naranja = manzana;
    manzana = aux;
}

int main() {
float naranja, manzana;
    cout<<"Ingrese la cantidad de litros de jugo de naranja"<<endl;
    cin>>naranja;
    cout<<"Ingrese la cantidad de litros de jugo de manzana"<<endl;
    cin>>manzana;
    cout<<"Contenedor 1 con Manzana:"<<manzana<<endl;
    cout<<"Contenedor 2 con Naranja:"<<naranja<<endl;
    intercambiarJugos(naranja, manzana);
    cout<<"Contenedor 1 con Naranja:"<<manzana<<endl;
    cout<<"Contenedor 2 con Manzana:"<<naranja<<endl;
    return 0;
}
