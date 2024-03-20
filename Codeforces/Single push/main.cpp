#include <iostream>

using namespace std;

int n, t, a[100000], b[100000], v[100000], ck;
int main()
{
    cin >> t;
    for (int p = 1; p <= t; p++)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        int i = 1, j = 1, var = 0, ci = 1, cj = 1, num = 0, nr = 0;
        while (a[i] == b[j])
        {
            i++;
            j++;
        }
        var = b[j] - a[i];
        i = 1;
        j = 1;
        while (i <= n && j <= n)
        {
            if (a[i] == b[j])
            {
                nr++;
                i++;
                j++;
            }
            else
            {
                if (b[j] - abs(var) == a[i])
                    num++;
                i++;
                j++;
            }
        }
        if (n - nr == num)
            v[ck]++;
        else if (nr == n)
            v[ck]++;
        ck++;
    }
    for (int i = 0; i < ck; i++)
        if (v[i] == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
}
