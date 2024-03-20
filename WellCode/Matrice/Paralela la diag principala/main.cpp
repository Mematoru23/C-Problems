#include <iostream>

using namespace std;

int main() {
    int m[100][100], n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> m[i][j];
    cin >> i >> j;
    while (i <= n && j <= n) {
        cout << m[i][j] << " ";
        i++;
        j++;
    }
}
