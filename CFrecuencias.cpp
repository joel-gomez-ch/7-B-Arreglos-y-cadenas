#include <iostream>

using namespace std;

int main() {

    //lectura de datos de entrada, profesores y alumnos
    int P, n;
    cout << "Ingrese la cantidad de profesores: ";
    cin >> P;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;

    //inicializacion del array con valores 0, (para evitar los numeros aleatorios)
    int frecuencia[P] = {0};

    cout << "\nIngrese el profesor favorito de cada alumno:\n";
    //lee los votos de los alumnos
    for (int i = 0; i < n; i++) {

        int F;
        cout << "Alumno " << i + 1 << ": ";
        cin >> F;

        //incrementa el voto al profesor elegido
        frecuencia[F - 1]++;
    }

    //resultados finales
    cout << "\nTabla de resultados:\n";
    for (int i = 0; i < P; i++) {
        cout << i + 1 << "-" << frecuencia[i] << endl;
    }

    return 0;
}