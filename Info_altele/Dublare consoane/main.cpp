#include <iostream>

using namespace std;

int var, n, d;
int main()
{
    cin >> n;
    int cn = n, c = 0;
    while (n)
    {
        c = c * 10 + n % 10;
        n /= 10;
    }
    while (c)
    {
        var = c % 10;
        if (var % 2 == 1)
            d = (d * 10 + var) * 10 + var;
        else
            d = d * 10 + var;
        c /= 10;
    }
    cout << d;
}
