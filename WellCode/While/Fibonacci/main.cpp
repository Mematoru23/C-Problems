#include <iostream>

using namespace std;

int n, x = 1, y = 1, i = 2;
int main() {
    cin >> n;
    if (n == 1 || n == 2) cout << x;
    else {
        int p = 0;
        while (i < n) {
            p = x + y;
            y = x;
            x = p;
            i++;
        }
    cout << p;
    }
}
