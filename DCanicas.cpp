#include <iostream>
using namespace std;

int main() {

    int N, C;
    cin >> N >> C;

    int vasos[N] = {0};
    
    for (int i = 0; i < C; i++) {

        int vaso;
        cin >> vaso;

        vasos[vaso - 1]++;
    }
    return 0;
}