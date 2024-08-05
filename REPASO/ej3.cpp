#include <iostream>
using namespace std;

void marcarAsiento(bool& asiento){
    asiento=true;
}

void mostar(bool asientos[]){
    for (int i=0; i<10; i++){
        if(asientos[i]){
            cout<<"El asiento "<<i+1<<" esta ocupado"<<endl;
        } else{
            cout<<"El asiento "<<i+1<<" esta libre"<<endl;
        }
    }

}

int main() {
    int num;
    bool asientos[10];
    for (int i=0; i<10; i++){
        asientos[i]=false;
    }
    mostar(asientos);
    cout<<"Ingrese el asiento que desea ocupar"<<endl;
    cin>>num;
    marcarAsiento(asientos[num-1]);
    mostar(asientos);
    return 0;
}