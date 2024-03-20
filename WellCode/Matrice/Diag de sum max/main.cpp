#include <iostream>

using namespace std;

int main()
{
    int m[100][100], n, sm[10000], ss[10000];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    //parcurs de la dreapta la standa
    int k = 0, maxim = -1000;
    for (int j = n - 1; j > 0; j--)
    {
        int linie = 0, coloana = j;
        while (linie < n && coloana < n)
        {
            sm[k] += m[linie][coloana];
            linie++;
            coloana++;
        }
        if (maxim < sm[k]) maxim = sm[k];
        k++;
    }
    for (int i = 1; i < n; i++)
    {
        int linie = i, coloana = 0;
        while (linie < n && coloana < n)
        {
            sm[k] += m[linie][coloana];
            linie++;
            coloana++;
        }
        if (maxim < sm[k]) maxim = sm[k];
        k++;
    }
    //parcurg de la stanga la dreapta
    int ok = 0;
    for (int j = 0; j < n; j++)
    {
        int linie = 0, coloana = j;
        while (linie < n && coloana < n)
        {
            ss[ok] += m[linie][coloana];
            linie++;
            coloana--;
        }
        if (maxim < ss[ok]) maxim = ss[ok];
        ok++;
    }
    for (int i = 1; i < n; i++)
    {
        int linie = i, coloana = n - 1;
        while (linie < n && coloana < n)
        {
            ss[ok] += m[linie][coloana];
            linie++;
            coloana--;
        }
        if (maxim < ss[ok]) maxim = ss[ok];
        ok++;
    }
    cout << maxim;
}
