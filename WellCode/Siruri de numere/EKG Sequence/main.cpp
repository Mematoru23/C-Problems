#include <iostream>

using namespace std;

int v[1000], t[1000], n, k = 3, kv = 2, d;

int cmmdc(int a, int b)
{
    int r = 0;
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    if (a == 1)
        return 0;
    return 1;
}

int parcurgere()
{
    int ok = 0;
    for (int i = 1; i <= k; i++)
        if (t[i] == d)
        {
            ok = 1;
            break;
        }
    if (ok > 0)
        return 0;
    return 1;
}

int main()
{
    t[1] = 1;
    t[2] = 2;
    v[1] = 1;
    v[2] = 2;
    cin >> n;
    for (int i = 3; i <= n; i++)
    {
        d = 2;
        while (d <= n * n)
        {
            if (cmmdc(d, v[kv]) && parcurgere())
            {
                t[k] = d;
                k++;
                break;
            }
            d++;
        }
        kv++;
        v[kv] = t[k - 1];
    }
    cout << t[n];
}
