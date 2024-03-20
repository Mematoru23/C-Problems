#include <iostream>

using namespace std;

int main() {
    int m[100][100], n;
    cin >> n;
    int linie = 0, coloana = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> m[i][j];

    for (int j = 1; j <= n; j++) {
        coloana = j;
        linie = n;
        while (linie <= n && coloana >= 1) {
            cout << m[linie][coloana] << " ";
            coloana--;
            linie--;
        }
    }
    for (int i = n - 1; i >= 1; i--) {
        coloana = n;
        linie = i;
        while (coloana <= n && linie >= 1) {
            cout << m[linie][coloana] << " ";
            coloana--;
            linie--;
        }
    }
}
