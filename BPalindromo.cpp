#include <iostream>
#include <string>

using namespace std;

int main() {

    int N;
    cin >> N;

    string resultado[N];

    for (int a = 0; a < N; a++) {

        string palabra;
        cin >> palabra;

        bool palindromo = true;
        int longitud = palabra.length();

        for (int i = 0; i < longitud / 2; i++) {

            if (palabra[i] != palabra[longitud - 1 - i]) {
                palindromo = false;
                break;
            }
        }

        if (palindromo){
            resultado[a] = "P";
        }else {
            resultado[a] = "NP";
    }
}
    for (int k = 0; k < N; k++) {
        cout << resultado[k] << endl;
    }

    return 0;
}