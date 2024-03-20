#include <iostream>

using namespace std;

int main() {
    int x, y = 0, nr = 2, d;
    cin >> x;
    while (y < x) {
        d = 0;
        for (int i = 1; i <= nr; i++)
            if (nr % i == 0) d++;
        if (d == 2) y++;
        nr++;
    }
    cout << nr - 1;
}
