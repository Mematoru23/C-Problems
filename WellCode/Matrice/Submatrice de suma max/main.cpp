#include <iostream>
using namespace std;

int main()
{
    int sp[100][100], n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> sp[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            sp[i][j] += sp[i - 1][j] + sp[i][j - 1] - sp[i - 1][j - 1];
    int maxim = -3000;
    for (int i1 = 1; i1 <= n; i1++)
    {
        for (int j1 = 1; j1 <= m; j1++)
        {
            int s = 0;
            for (int i2 = i1; i2 <= n; i2++)
            {
                for (int j2 = j1; j2 <= m; j2++)
                {
                    s = sp[i2][j2] - sp[i1 - 1][j2] - sp[i2][j1 - 1] + sp[i1 - 1][j1 - 1];
                    if (s > maxim) maxim = s;
                }
            }
        }
    }
    cout << maxim;
}
