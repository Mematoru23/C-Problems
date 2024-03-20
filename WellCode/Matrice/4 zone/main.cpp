#include <iostream>
using namespace std;

int main()
{
    int x[500][500], n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> x[i][j];
    for (int i = 1; i <= n / 2; i++)
        for (int j = i + 1; j <= n; j++)
            if (i < j && i + j < n + 1) cout << x[i][j] << " ";
    cout << "\n";
    for (int i = 2; i < n; i++)
        for (int j = 1; j <= n; j++)
            if (i > j && i + j < n + 1) cout << x[i][j] << " ";
    cout << "\n";
    for (int i = n / 2 + 1; i <= n; i++)
        for (int j = 2; j < n; j++)
            if (i > j && i + j > n + 1) cout << x[i][j] << " ";
    cout << "\n";
    for (int i = 2; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (i < j && i + j > n + 1) cout << x[i][j] << " ";
}
