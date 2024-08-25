#include <iostream>
using namespace std;

int contarParesPosImpar(int n, int pos=1){

    if(n==0){
        return 0; //si elnumero tiene una sola posicion se corta
    }
    int digitoActual=n%10; //resto
    if(digitoActual%2==0 && pos%2!=0){
        return 1+contarParesPosImpar(n/10,pos+1); //pos+1 para pasar a la siguiente posicion 
    }
    return contarParesPosImpar(n/10,pos+1);

}

int main(){
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"La cantidad de digitos pares en posiciones impares es: "<<contarParesPosImpar(n)<<endl;

}