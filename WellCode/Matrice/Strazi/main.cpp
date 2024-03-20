#include <iostream>

using namespace std;

int main()
{
    int x[100][100], xs[10000], n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> x[i][j];
    for (int j = 1; j <= n; j++)
    {
        int sum = 0;
        for (int i = 1; i <= m; i++)
        {
            sum += x[j][i];
            xs[j] = sum;
        }
    }
    int maxim = -32600, p = 0;
    for (int i = 1; i <= n; i++)
    {
        if (maxim <= xs[i])
        {
            maxim = xs[i];
            p = i;
        }
    }
    cout << p;
}
