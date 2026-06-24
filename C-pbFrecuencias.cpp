#include <iostream>
using namespace std;

int main() {
    int P, n;
    cin >> P >> n;
    int favoritos[1000];
    int frecuencia[101] = {0};
    for (int i = 0; i < n; i++) {
        cin >> favoritos[i];
    }
    for (int i = 0; i < n; i++) {
        int f = favoritos[i];
        frecuencia[f] = frecuencia[f] + 1;
    }
    for (int i = 1; i <= P; i++) {
        cout << i << "-" << frecuencia[i] << endl;
    }
    return 0;
}