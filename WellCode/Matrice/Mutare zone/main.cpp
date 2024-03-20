#include <iostream>
using namespace std;

int mt[500][500], n, v[1000], k, cmt[500][500];
void mutare_zone()
{
    for (int i = 1; i <= n / 2; i++)
        for (int j = i + 1; j <= n; j++)
            if (i < j && i + j < n + 1)
                v[k++] = mt[i][j];
    k = 0;
    for (int j = n; j > n / 2 + 1; j--)
        for (int i = 2; i < n; i++)
            if (i < j && i + j > n + 1)
                cmt[i][j] = v[k++]; // mut din nord in est
    k = 0;
    for (int j = n; j > n / 2 + 1; j--)
        for (int i = 2; i < n; i++)
            if (i < j && i + j >= n + 2)
                v[k++] = mt[i][j];
    k = 0;
    for (int i = n; i > n / 2 + 1; i--)
        for (int j = n - 1; j >= 2; j--)
            if (i > j && i + j > n + 1)
                cmt[i][j] = v[k++]; // mut din est in sud
    k = 0;
    for (int i = n; i > n / 2 + 1; i--)
        for (int j = n - 1; j >= 2; j--)
            if (i > j && i + j > n + 1)
                v[k++] = mt[i][j];
    k = 0;
    for (int j = 1; j <= n / 2; j++)
        for (int i = n - 1; i > 1; i--)
            if (i > j && i + j < n + 1)
                cmt[i][j] = v[k++]; // mut din sud in vest
    k = 0;
    for (int j = 1; j <= n / 2; j++)
        for (int i = n - 1; i > 1; i--)
            if (i > j && i + j < n + 1)
                v[k++] = mt[i][j];
    k = 0;
    for (int i = 1; i <= n / 2; i++)
        for (int j = i + 1; j < n; j++)
            if (i < j && i + j < n + 1)
                cmt[i][j] = v[k++]; // mut din vest in nord
    k = 0;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mt[i][j];
    mutare_zone();
    if (n % 2 == 1)
    {
        for (int i = 1; i <= n / 2 + 1; i++)
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    v[k++] = mt[i][j];
                if (i + j == n + 1 && i != n / 2 + 1)
                    v[k++] = mt[i][j];
            }
        for (int i = n / 2 + 2; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (i + j == n + 1)
                    v[k++] = mt[i][j];
                if (i == j)
                    v[k++] = mt[i][j];
            }
        k = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (i == j && cmt[i][j] == 0)
                    cmt[i][j] = v[k++];
                if (i + j == n + 1 && cmt[i][j] == 0)
                    cmt[i][j] = v[k++];
            }
    }
    else
    {
        for (int i = 1; i <= n / 2 + 1; i++)
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    v[k++] = mt[i][j];
                if (i + j == n + 1)
                    v[k++] = mt[i][j];
            }
        for (int i = n / 2 + 2; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (i + j == n + 1)
                    v[k++] = mt[i][j];
                if (i == j)
                    v[k++] = mt[i][j];
            }
        k = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    cmt[i][j] = v[k++];
                if (i + j == n + 1)
                    cmt[i][j] = v[k++];
            }
    }
    cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << cmt[i][j] << " ";
        cout << "\n";
    }
}
