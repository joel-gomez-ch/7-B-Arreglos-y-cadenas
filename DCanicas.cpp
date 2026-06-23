#include <iostream>
using namespace std;

int main() {

    int N, C;

    cout << "Ingrese la cantidad de vasos: ";
    cin >> N;

    cout << "Ingrese la cantidad de canicas lanzadas: ";
    cin >> C;

    int vasos[N] = {0};

    cout << "\nIngrese el numero del vaso donde cayo cada canica:\n";

    for (int i = 0; i < C; i++) {

        int vaso;

        cout << "Canica " << i + 1 << ": ";
        cin >> vaso;

        vasos[vaso - 1]++;
    }

    cout << "\nCantidad de canicas en cada vaso:\n";

    for (int i = 0; i < N; i++) {
        cout << "Vaso " << i + 1 << ": "
             << vasos[i] << " canicas" << endl;
    }

    return 0;
}