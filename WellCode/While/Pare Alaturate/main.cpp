#include <iostream>

using namespace std;

int main()
{
    int x, p = 0, mx, my;
    cin >> x;
    if (x < 9) cout << 0;
    else {
        while (x > 9) {
            mx = x % 10;
            x /= 10;
            my = x % 10;
            if ((mx + my) % 2 == 0) p++;
    }
    cout << p;
    }
}
