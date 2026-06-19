#include <iostream>
using namespace std;

int main() {
    int N;

    //ingreso de la cantidad de elementos del arreglo
    cout << "Indique la cantidad de elementos que tendra el arreglo: ";
    cin >> N;

    //validacion de cantidad de elementos
    if(1<=N && N<= 1000){
        int numeros[N];
    
        //ingreso de los elementos del arreglo
        for (int i = 0; i < N; i++) {
            cout << "Ingrese el elemento " << i+1 <<": ";
            cin >> numeros[i];
        }

        //salida de los elementos en orden inverso
        cout << "Los elementos en orden inverso serian: ";
        for (int i = N - 1; i >= 0; i--) {
            cout << numeros[i] << " ";
        }
    }
    return 0;
}