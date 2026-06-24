#include <iostream>
using namespace std;

int main() {
    int P, n;
    cin >> P >> n;
    int frecuencia[101] = {0};
    for (int i = 0; i < n; i++) {
        int f;
        cin >> f;
        frecuencia[f]++;
    }
    for (int i = 1; i <= P; i++) {
        cout << i << "-" << frecuencia[i] << endl;
    }
    return 0;
}