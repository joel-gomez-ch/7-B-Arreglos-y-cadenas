#include <iostream>

using namespace std;

int main() {

    int P, n;
    cin >> P >> n;

    int frecuencia[P] = {0};

    for (int i = 0; i < n; i++) {

        int F;
        cin >> F;

        frecuencia[F - 1]++;
    }

    for (int i = 0; i < P; i++) {
        cout << i + 1 << "-" << frecuencia[i] << endl;
    }

    return 0;
}