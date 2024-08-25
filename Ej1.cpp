#include <iostream>
using namespace std;

int funcionPotencia(int base, int expo){

    if(expo==0){
        return 1;
    }else{
        return base*funcionPotencia(base,expo-1);
    }
}

int main() {

    int base, expo;

    cout<<"Ingrese la base: "<<endl;
    cin>>base;
    cout<<"Ingrese el exponente: "<<endl;
    cin>>expo;

    cout<<"La potencia de "<<base<<" a la "<<expo<<" es: "<<funcionPotencia(base,expo)<<endl;


    

   
}
