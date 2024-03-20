#include <iostream>

using namespace std;

int v[10000], poz = 1;
int main()
{
    int m[100][100], n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> m[i][j];
    for (int k = 1; k <= 2 * n - 1; k++)
    {
        if (k <= n)
        {
            if (k % 2 == 1)
            {
                int linie = k, coloana = 1;
                while (linie >= 1 && coloana <= k)
                {
                    v[poz++] = m[linie][coloana];
                    linie--;
                    coloana++;
                }
            }
            else if (k % 2 == 0)
            {
                int linie = 1, coloana = k;
                while (linie <= k && coloana >= 1 && linie != coloana)
                {
                    v[poz++] = m[linie][coloana];
                    linie++;
                    coloana--;
                }
            }
        }
        else if (k > n)
        {
            if (k % 2 == 1)
            {
                int linie = n, coloana = k - n + 1;
                while (linie >= k - n + 1 && coloana <= n)
                {
                    v[poz++] = m[linie][coloana];
                    linie--;
                    coloana++;
                }
            }
            else if (k % 2 == 0)
            {
                int linie = k - n + 1, coloana = n;
                while (linie <= n && coloana >= k - n + 1 && linie != coloana)
                {
                    v[poz++] = m[linie][coloana];
                    linie++;
                    coloana--;
                }
            }
        }
    }
    for (int i = 1; i < poz; i++)
        cout << v[i] << " ";
}
