#include <iostream>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    int cn = n, y = n;
    while (n > 0) {
        if (n < 10) a = n;
        n /= 10;
    }
    int k = 0;
    while (cn > 9) {
        if ((cn % 10) % a == 0) k++;
        cn /= 10;
    }
    if (y != 0 && y < 10) cout << 1;
    else if (y == 0) cout << 0;
    else cout << k;
}
