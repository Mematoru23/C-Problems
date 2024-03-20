#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, k = 0, ok = 0;
    cin >> a >> b >> c;
    int cb = b;
    int cc = c;
    while (b > 0) {
        k++;
        b /= 10;
    }
    while (c > 0) {
        ok++;
        c /= 10;
    }
    if (cc == 0 && cb == 0) a = a * 100;
    else if (cb == 0 && cc != 0) a = a * 10 * pow(10, ok) + cc;
    else if (cc == 0 && cb != 0) a = (a * pow(10, k) + cb) * 10;
    else {
    while (k > 0) {
        a *= 10;
        k--;
    }
    if (a < 0) a -= cb;
        else a += cb;
    while (ok > 0) {
        a *= 10;
        ok--;
    }
    if (a < 0) a -= cc;
        else a += cc;
    }
    cout << a << " " << a * 2;
}
