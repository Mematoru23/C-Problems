#include <iostream>

using namespace std;

int main()
{
    int mt[500][500], v[10000], n, m, k;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mt[i][j];
    cin >> k;
    for (int i = 0; i < k; i++)
        cin >> v[i];
    int ok;
    for (int l = 0; l < k; l++)
    {
        ok = 0;
        int j = 0, j1 = m - 1, i1 = 0;
        if (v[l] < mt[0][0] || v[l] > mt[n - 1][m - 1])
        {
            cout << "NU\n";
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[l] >= mt[i][j] && v[l] <= mt[i][j1])
            {
                i1 = i;
                ok = 0;
                for (int i = j; i <= j1; i++)
                    if (mt[i1][i] == v[l])
                    {
                        ok = 1;
                        break;
                    }
                if (ok == 1)
                    break;
            }
        }
        if (ok == 1)
            cout << "DA\n";
        else
            cout << "NU\n";
    }
}
/*3 3
1 2 4
2 3 6
5 6 7
5
2 4 10 7 5
*/
