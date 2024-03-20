#include <iostream>
#include <limits>

using namespace std;

int v[10], cv[10], n, cmmdc, k, r, ok, maxim = numeric_limits<int>::max();

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    cmmdc = v[1];
    for (int i = 2; i <= n; i++)
    {
        k = v[i];
        if (k < cmmdc)
        {
            while (cmmdc != 0)
            {
                r = k % cmmdc;
                k = cmmdc;
                cmmdc = r;
                maxim = min(k, maxim);
            }
        }
        else
        {
            while (k != 0)
            {
                r = cmmdc % k;
                cmmdc = k;
                k = r;
                maxim = min(cmmdc, maxim);
            }
        }
    }
    cout << maxim;
}
