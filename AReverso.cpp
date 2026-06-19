#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Indique la cantidad de elementos que tendra el arreglo: ";
    cin >> N;
    if(1<=N && N<= 1000){
        int numeros[N];
    
        for (int i = 0; i < N; i++) {
            cout << "Ingrese el elemento " << i+1 <<": ";
            cin >> numeros[i];
        }

        cout << "Los elementos en orden inverso serian: ";
        for (int i = N - 1; i >= 0; i--) {
            cout << numeros[i] << " ";
        }
    }
    return 0;
}