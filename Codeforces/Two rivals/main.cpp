#include <iostream>
#include <math.h>

using namespace std;

int v[1000], cv[1000], k = 1;
int main()
{
    int t, n, x, a, b;
    cin >> t;
    int ct = t;
    while (t)
    {
        cin >> n >> x >> a >> b;
        if (a > b && x < b)
        {
            cv[k] = a - b + x;
        }
        else
            cv[k] = abs(b - a);
        t--;
        k++;
    }
    for (int i = 1; i <= ct; i++)
        cout << cv[i] << "\n";
}
