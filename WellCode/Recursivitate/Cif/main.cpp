#include <iostream>

using namespace std;

int cif(int n, int c)
{
    if (n == 0)
        return 0;
    if (n % 10 == c)
        return 1 + cif(n / 10, c);
    else cif(n / 10, c);
}

int main()
{
    cout << cif(100, 0);
}
