#include <iostream>

using namespace std;

int main()
{
    int n, x = 2, p = 0;
    cin >> n;
    while (n > 1) {
        p = 0;
        while (n % x == 0) {
            p++;
            n /= x;
        }
        if (p != 0) {
            cout << x << "^" << p << endl;
        }
        x++;
        if (n > 1 && x * x > n)
            x = n;
    }
}
