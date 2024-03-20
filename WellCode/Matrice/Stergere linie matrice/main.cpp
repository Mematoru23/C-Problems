#include <iostream>

using namespace std;

int main() {
    int n, m, k, x[500][500];
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> x[i][j];
        }
    for (int i = k; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            x[i][j] = x[i + 1][j];
        }
    cout << "\n";
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= m; j++) {
            cout << x[i][j] << " ";
        }
        cout << "\n";
    }
}
