#include <iostream>

using namespace std;

int mt[500][500], x[500][500], n, m, q, v[500000], k, mij;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> mt[i][j];
        v[k++] = mt[i][0];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
        for (int j = 0; j < m; j++)
            cin >> x[i][j];

    for (int i = 0; i < q; i++)
    {
        int st = 0, dr = n;
        while (st < dr)
        {
            mij = (st + dr) / 2;
            if (v[mij] < x[i][0])
                st = mij + 1;
            else
                dr = mij;
        }
        if (x[i][0] == v[st])
        {
            int p = 0, t = 0, nr = 0;
            while (p < m)
            {
                while (t < m)
                {
                    if (mt[st][t] == x[i][p])
                        nr++;
                    t++;
                    p++;
                }
            }
            if (nr == m)
                cout << "DA\n";
            else
                cout << "NU\n";
        }
        else
        {
            cout << "NU\n";
            continue;
        }
    }
}
