#include <iostream>

using namespace std;

int maxCons0(long long n)
{
    int maxim = 0, ok;
    while (n)
    {
        if (n % 10 != 0)
        {
            while (n % 10 != 0)
                n /= 10;
        }
        else
        {
            ok = 0;
            while (n % 10 == 0)
            {
                ok++;
                n /= 10;
            }
            if (maxim <= ok)
                maxim = ok;
        }

    }
    return maxim;
}

int main()
{
    long long n;
    cin >> n;
    cout << maxCons0(n);
}
