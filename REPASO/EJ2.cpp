#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main() {
    
    int n;
    cout<<"Ingrese un numero entero positivo"<<endl;
    cin>>n;
    int fact=factorial(n);
    cout<<"El factorial del numero es: "<<fact;

    return 0;
}   