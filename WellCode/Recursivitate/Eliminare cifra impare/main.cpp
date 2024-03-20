#include <iostream>

using namespace std;

int eliminareCifreImpare(int n)
{
    if (n == 0)
        return 0;
    else
    {
        eliminareCifreImpare(n / 10);
        if ((n % 10) % 2 == 0)
            return n % 10 + 10 * eliminareCifreImpare(n / 10);
        else return eliminareCifreImpare(n / 10);
    }
}

int main()
{
    cout << eliminareCifreImpare(123456);
}
