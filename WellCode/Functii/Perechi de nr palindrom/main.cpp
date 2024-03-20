#include <iostream>

using namespace std;

int inv(int ras)
{
    int c = 0;
    while (ras)
    {
        c = c * 10 + ras % 10;
        ras /= 10;
    }
    return c;
}

int ePalindrom(int nr)
{
    if (nr == inv(nr))
        return 1;
    else
        return 0;
}

int nrPal(int a, int b)
{
    int ok = 0;
    for (int i = a; i <= b; i++)
        if (ePalindrom(i))
            ok++;
    return ok;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << nrPal(a, b);
}
