#include <iostream>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;
    int vasos[1000001] = {0};
    for (int i = 0; i < C; i++) {
        int v;
        cin >> v;
        vasos[v]++;
    }
    for (int i = 1; i <= N; i++) {
        cout << vasos[i] << endl;
    }
    return 0;
}