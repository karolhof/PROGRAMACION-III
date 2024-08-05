#include <iostream>
using namespace std;

unsigned long long factorialIterativo(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

unsigned long long factorialRecursivo(int n){
    if (n==0){
        return 1;
    } else {
        return n*factorialRecursivo(n-1);
    }
}

int main() {
    
    int n;
    cout<<"Ingrese un numero entero positivo"<<endl;
    cin>>n;
    unsigned long long factI=factorialIterativo(n); //solo numeros positivos
    cout<<"El factorial del numero (iterativamente)es: "<<factI<<endl;
    unsigned long long factR=factorialRecursivo(n); //solo numeros positivos
    cout<<"El factorial del numero (recursivamente)es: "<<factR<<endl;
    return 0;
}   