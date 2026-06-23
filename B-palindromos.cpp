#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string palabra;
    for (int i = 0; i < N; i++) {
        cin >> palabra;
        bool esPalindromo = true;
        for (int j = 0; j < palabra.length(); j++) {
            if (palabra[j] != palabra[palabra.length() - 1 - j]) {
                esPalindromo = false;
            }
        }
        if (esPalindromo) {
            cout << "P" << endl;
        } else {
            cout << "NP" << endl;
        }
    }
    return 0;
}