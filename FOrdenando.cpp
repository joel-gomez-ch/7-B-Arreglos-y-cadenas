#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string texto;
    string letras = "";

    getline(cin, texto);

    for (int i = 0; i < texto.length(); i++) {

        if (texto[i] >= 'a' && texto[i] <= 'z') {
            letras += texto[i];
        }
    }

    sort(letras.begin(), letras.end());

    int j = 0;
    
    return 0;
}