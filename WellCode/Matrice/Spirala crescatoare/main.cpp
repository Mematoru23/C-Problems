#include <iostream>

using namespace std;

int mt[51][51], n, m, nr, v[100000], num, ok;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> mt[i][j];
    int lin_in = 1, col_in = 1, lin_sf = n, col_sf = m;
    while (nr < n * m)
    {
        for (int j = col_in; j < col_sf; j++)
        {
            if (nr != n * m)
            {
                v[nr] = mt[lin_in][j];
                nr++;
            }
        }

        for (int i = lin_in; i < lin_sf; i++)
        {
            if (nr != n * m)
            {
                v[nr] = mt[i][col_sf];
                nr++;
            }
        }

        for (int j = col_sf; j > col_in; j--)
        {
            if (nr != n * m)
            {
                v[nr] = mt[lin_sf][j];
                nr++;
            }
        }

        for (int i = lin_sf; i > lin_in; i--)
        {
            if (nr != n * m)
            {
                v[nr] = mt[i][col_in];
                nr++;
            }
        }
        lin_sf--;
        col_in++;
        col_sf--;
        lin_in++;
    }
    num++;
    if (nr == num)
        cout << "DA";
    else
        cout << "NU";
}
