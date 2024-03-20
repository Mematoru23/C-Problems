#include <iostream>

using namespace std;

int main() {
    int mt[300][300], n, m, aux[300][300];
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> mt[i][j];
    cout << "\n";
    if (n > m) {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m + 1; j++)
                aux[i - 1][j] = mt[j][n - i + 1];

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++)
                cout << aux[i][j] << " ";
            cout << "\n";
        }
    }
    else {
        for (int i = 1; i <= n + (m + n); i++)
            for (int j = 1; j <= m + (m + n); j++)
                aux[i][j] = mt[j][n - i + (m - n + 1)];

        for (int i = 1; i <= n + (m - n); i++) {
            for (int j = 1; j <= m - (m - n); j++)
                cout << aux[i][j] << " ";
            cout << "\n";
        }
    }
}
