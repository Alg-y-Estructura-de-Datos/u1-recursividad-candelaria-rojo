#include <iostream>
using namespace std;

int suma(int n){
    if(n==1){
        cout<<n; //condicion base
        return 1;
    }else{
        cout<<n<<" + ";
        return n + suma(n - 1);  // Llamada recursiva (terminacion)
    }  
}

int main() {
    int num;
    
    cout<<"Ingrese un numero "<<endl;
    cin>>num;

    int resultado = suma(num);

    cout << "El resultado de la suma es: " << resultado << endl;
}

