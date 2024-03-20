#include <iostream>

using namespace std;
int n, a, b, c, w, m, p, j, t, r, x, cn, v, y;
int main() {

    cin >> n;
    cn = n;
    a = n % 100 / 10;
    int i = 0;
    while (n > 0) {
        if (n < 100 && n > 9) {
            b = n % 10;
            t = i;
        }
        if (n % 10 == 0) w++;
        n /= 10;
        v++;
        i++;
    }
    if ((cn < 1000 && cn > 99)|| w == i - 1) cout << cn;
    else if (cn < 100 && cn > 9) {
        a = cn % 10;
        b = cn / 10;
        x = a * 10 + b;
        cout << x;
    }
    else {
        m = cn % 10 * 10 + b;
        p = cn / 100;
        while (p > 0) {
            m *= 10;
            if (p % 10 != b || (p % 10 == b && (y < t - 2 || y > t - 2))) {
                m = m + p % 10;
            }
            else m = m + a;
                p /= 10;
                y++;
        }
    int s = m;
    while (v > 0) {
        r = s % 10;
        x = x * 10 + r;
        s /= 10;
        v--;
    }
    cout << x;
    }
}
