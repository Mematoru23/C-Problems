#include <iostream>

using namespace std;
int n, m, k, x[500][500], i, j;
int main() {
    cin >> n >> m >> k;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++) {
            cin >> x[i][j];
        }
    for (i = 1; i <= n; i++)
        for (j = k; j <= m; j++) {
            x[i][j] = x[i][j + 1];
        }
    cout << "\n";
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m - 1; j++) {
            cout << x[i][j] << " ";
        }
        cout << "\n";
    }
}
