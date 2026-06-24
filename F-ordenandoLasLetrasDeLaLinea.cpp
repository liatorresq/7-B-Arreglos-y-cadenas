#include <iostream>
using namespace std;

int main() {
    string texto;
    getline(cin, texto);
    char letras[100];
    int k = 0;

    for (int i = 0; i < texto.length(); i++) {
         if (texto[i] >= 'a' && texto[i] <= 'z' ) {
             letras[k] = texto[i];
            k++;
         }
     }  
    for (int i = 0; i < k; i++){
        for (int j = 0; j < k -1; j++){
            if (letras [j] > letras[j + 1]){
                char temp = letras [j];
                letras[j] = letras[j + 1];
                letras [j + 1] = temp;
            }
        }
    }
    int index = 0;
    for (int i = 0; i < texto.length(); i++){
        if (texto[i] >= 'a' && texto [i] <= 'z'){
            texto[i] = letras[index];
            index++;
        }
    }
    cout << texto << endl;
    return 0;
}