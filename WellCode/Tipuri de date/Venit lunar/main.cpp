#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x[100], n, s = 0.0 , k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    while (n >= 4)
    {
        n -= 4;
        k++;
    }
    int t = 1, i, ok = 4;
    while (k > 0)
    {
        for (i = t; i <= ok; i++)
            s += x[i];
        t = ok + 1;
        ok += 4;
        k--;
        cout << fixed << setprecision(3) << s / 4 << " ";
        s = 0;
    }
}
