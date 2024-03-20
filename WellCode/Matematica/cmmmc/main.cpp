#include <iostream>

using namespace std;

int main()
{
    long long a, b, x, y;
    cin >> a >> b;
    x = a;
    y = b;
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    cout << (a * b) / x;
}
