#include <iostream>

using namespace std;

int mt[100][100], n, m, l, i, j, v[100000], ck;
int main()
{
    cin >> n >> m;
    for (int p = 1; p <= n; p++)
        for (int k = 1; k <= m; k++)
            cin >> mt[p][k];
    cin >> i >> j >> l;
    int ci = i + l - 1, cj = j + l - 1;
    for (int p = cj; p >= j; p--)
        for (int k = i; k <= cj; k++)
            v[ck++] = mt[k][p];
    ck = 0;
    for (int p = i; p <= ci; p++)
        for (int k = j; k <= cj; k++)
                mt[p][k] = v[ck++];
    for (int p = 1; p <= n; p++)
    {
        for (int k = 1; k <= m; k++)
            cout << mt[p][k] << " ";
        cout << "\n";
    }
}
