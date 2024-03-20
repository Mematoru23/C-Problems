#include <iostream>
#include <cmath>

using namespace std;

int putere(int a, int b, int c)
{
    if (b == 0) return 1;
    if (b == 1) return a % c;
    if (b % 2 == 0)
        return (a * putere(a, (b - 1) / 2, c) % c * (a * putere(a, (b - 1) / 2, c) % c)) % c;
    if (b % 2 == 1)
        return (a * putere(a, 1, c) % c * a * putere(a, b - 3, c) % c) % c;
    return 0;
}

int main()
{
    cout << putere(3, 7, 100);
}
