#include <iostream>
using namespace std;

int invertido(int n){
    if(n<10){
        return n;
    }else{
        cout<<n%10;
        return invertido(n / 10);
    }

}

//invertido=invertido*10+numero%10 sirve para saber para el ultimo digito de un numero 

int main() {
    int num;

    cout<<"Ingrese un numero "<<endl;
    cin>>num;

     if (num<0){
        cout<<"El numero ingresado no es valido"<<endl;
        return 1;
    }

    cout<<"El numero ingresado fue "<<num<<" y su numero invertido es "<<invertido(num)<<endl;


    
}
