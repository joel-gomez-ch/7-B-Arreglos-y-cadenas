#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string texto;
    string letras = "";

    //lee la linea completa de texto
    cout << "Ingrese una linea de texto: ";
    getline(cin, texto);

    //extrae únicamente las letras del texto
    for (int i = 0; i < texto.length(); i++) {

        if (texto[i] >= 'a' && texto[i] <= 'z') {
            letras += texto[i];
        }
    }

    //ordena las letras alfabeticamente
    sort(letras.begin(), letras.end());

    int j = 0;

    //reemplaza las letras originales por las letras ordenadas
    for (int i = 0; i < texto.length(); i++) {

        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = letras[j];
            j++;
        }
    }

    //muestra la linea con las letras ordenadas
    cout << "\nLa linea ordenada es:\n";
    cout << texto;

    return 0;
}