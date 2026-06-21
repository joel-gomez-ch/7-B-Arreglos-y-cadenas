#include <iostream>
#include <string>

using namespace std;

int main() {

    int N;
    // Leer la cantidad de palabras a evaluar
    cout << "Ingrese la cantidad de palabras: ";
    cin >> N;

    string resultado[N];

    // Lee cada palabra y verificar si es palíndromo
    for (int a = 0; a < N; a++) {

        string palabra;
        cout << "Ingrese la palabra " << a + 1 << ": ";
        cin >> palabra;

        bool palindromo = true;
        int longitud = palabra.length();

        // Compara cada caracter desde los extremos hacia el centro
        for (int i = 0; i < longitud / 2; i++) {

            if (palabra[i] != palabra[longitud - 1 - i]) {
                palindromo = false;
                break;
            }
        }

        // Guardar el resultado
        if (palindromo){
            resultado[a] = "P";
        }else {
            resultado[a] = "NP";
        }
    }

    // Muestra los resultados obtenidos
    cout << "\nResultados:\n";
    for (int k = 0; k < N; k++) {
        cout << resultado[k] << endl;
    }

    return 0;
}