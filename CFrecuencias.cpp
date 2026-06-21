#include <iostream>

using namespace std;

int main() {

    int P, n;
    cout << "Ingrese la cantidad de profesores: ";
    cin >> P;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;

    int frecuencia[P] = {0};

    cout << "\nIngrese el profesor favorito de cada alumno:\n";
    for (int i = 0; i < n; i++) {

        int F;
        cout << "Alumno " << i + 1 << ": ";
        cin >> F;

        frecuencia[F - 1]++;
    }

    cout << "\nTabla de resultados:\n";
    for (int i = 0; i < P; i++) {
        cout << i + 1 << "-" << frecuencia[i] << endl;
    }

    return 0;
}