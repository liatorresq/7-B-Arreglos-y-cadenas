#include <iostream>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;
    int lanzamientos[1000000];
    int vasos[1000001] = {0};
    for (int i = 0; i < C; i++) {
        cin >> lanzamientos[i];
    }
    for (int i = 0; i < C; i++) {
        int v = lanzamientos[i];
        vasos[v] = vasos[v] + 1;
    }
    for (int i = 1; i <= N; i++) {
        cout << vasos[i] << endl;
    }
    return 0;
}