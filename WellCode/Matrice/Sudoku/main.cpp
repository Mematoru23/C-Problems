#include <iostream>

using namespace std;

int mt[100][100], n = 9, v[100], ok, nr, x[100], kk, val, vx[100], num, ck;
int main()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mt[i][j];
    for (int i = 1; i <= n; i++)
    {
        ok = 0;
        for (int k = 0; k <= n; k++)
            v[k] = 0;
        for (int j = 1; j <= n; j++)
            v[mt[i][j]]++;
        for (int k = 1; k <= n; k++)
            if (v[k] == 1)
                ok++;
        if (ok == n)
            nr++;
    }
    for (int j = 1; j <= n; j++)
    {
        kk = 0;
        for (int k = 0; k <= n; k++)
            x[k] = 0;
        for (int i = 1; i <= n; i++)
            x[mt[i][j]]++;
        for (int k = 1; k <= n; k++)
            if (x[k] == 1)
                kk++;
        if (kk == n)
            val++;
    }
    for (int i = 1; i <= n; i += 3)
    {
        for (int j = 1; j <= n; j += 3)
        {
            ck = 0;
            for (int k = 1; k <= n; k++)
                v[k] = 0;
            for (int k = i; k <= i + 2; k++)
                for (int p = j; p <= j + 2; p++)
                    v[mt[k][p]]++;
            for (int k = 1; k <= n; k++)
                if (v[k] == 1)
                    ck++;
            if (ck == n)
                num++;
        }
    }
    if (n == nr && val == n && num == n)
        cout << "corect";
    else
        cout << "incorect";
}
