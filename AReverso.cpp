#include <iostream>
using namespace std;

int main() {
    int N;
    
    cin >> N;
    if(1<=N && N<= 1000){
        int numeros[N];
    
        for (int i = 0; i < N; i++) {
            cin >> numeros[i];
        }

        for (int i = N - 1; i >= 0; i--) {
            cout << numeros[i] << " ";
        }
    }
    return 0;
}