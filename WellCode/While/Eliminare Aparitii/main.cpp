#include <iostream>

using namespace std;
int n, copn, c, x, cn, t, k, i, y;
int main() {
    cin >> n >> c;
    copn = n;
    y = n;
    while (n > 0) {
        if (copn % 10 == 0) {
            i++;
            copn /= 10;
        }
        cn = cn * 10 + n % 10;
        t++;
        n /= 10;
    }
    while (cn > 0) {
        if (cn % 10 != c)
            x = x * 10 + cn % 10;
        else k++;
        cn /= 10;
    }
    if (i != 0) {
        int p = 1;
        while (p <= i) {
            x *= 10;
            p++;
        }
        cout << x;
    }
    else if (y == 0 && c != y) cout << 0;
    else if (y == 0 && c == y) cout << -1;
    else if (k == t) cout << -1;
    else cout << x;
}

