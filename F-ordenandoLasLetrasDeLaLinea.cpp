#include <iostream>
using namespace std;

int main() {
    string texto;
    getline(cin, texto);
    int n = texto.length();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (texto[j] >= 'a' && texto[j] <= 'z' &&
                texto[j+1] >= 'a' && texto[j+1] <= 'z') {
                if (texto[j] > texto[j+1]) {
                    char temp = texto[j];
                    texto[j] = texto[j+1];
                    texto[j+1] = temp;
                }
            }
        }
    }
    cout << texto << endl;
    return 0;
}