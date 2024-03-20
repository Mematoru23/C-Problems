#include <iostream>

using namespace std;

int main() {
    int n, x[1000], k = 0, aux, m, v[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        v[i] = x[i];
    }
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 0) {
            aux = x[i];
            x[i] = x[k];
            x[k] = aux;
            k++;
        }
    }
    m = n;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 1) {
            x[m - 1] = v[i];
            m--;
        }
    }
    for (int i = 0; i < n; i++) cout << x[i] << " ";
}
