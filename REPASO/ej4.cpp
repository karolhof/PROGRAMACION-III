#include <iostream>
using namespace std;

int sumarEnteros(int a, int b){
    return a+b;
}

float calcularArea(float radio){
    return radio*radio*3.1416;
}

int calcularPotencia(int base, int exponente){
    int potencia=1;
    for (int i=0; i<exponente; i++){
        potencia*=base;
    }
    return potencia;
}

void menu(){
    bool salir=false;
    while(salir==false){
        int option;
        cout<<"¿Que desea hacer?"<<endl;
        cout<<"1. Sumar enteros"<<endl;
        cout<<"2. Calcular area"<<endl;
        cout<<"3. Calcular potencia"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>option;

        switch (option) {
            case 1:
                cout<<"Ingrese dos numeros para sumar"<<endl;
                int a,b;
                cin>>a>>b;
                cout<<"El resultado de la suma es: "<<sumarEnteros(a,b)<<endl;
                break;
            case 2:
                cout<<"Ingrese el radio del circulo"<<endl;
                float radio;
                cin>>radio;
                cout<<"El área del circulo es: "<<calcularArea(radio)<<endl;
                break;
            case 3:
                cout<<"Ingrese una base y un exponente"<<endl;
                int base, exponente;
                cin>>base>>exponente;
                cout<<"La potencia es: "<<calcularPotencia(base, exponente)<<endl;
                break;
            case 4:
                salir=true;
                break;
            default:
                
                break;
        }
    }
}

int main() {
    menu();
    return 0;
}