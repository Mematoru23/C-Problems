#include <iostream>
using namespace std;

int main()
{
    int x[500][500], n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j) x[i][j] = 0;
            if (i + j < n + 1 && i < j) x[i][j] = 1;
            if (i > j && i + j < n + 1) x[i][j] = 4;
            if (i > j && i + j > n + 1) x[i][j] = 3;
            if (i < j && j <= n && i + j > n + 1) x[i][j] = 2;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << x[i][j] << " ";
        cout << "\n";
    }
}
