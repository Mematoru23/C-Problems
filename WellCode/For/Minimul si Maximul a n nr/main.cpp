#include <iostream>

using namespace std;

int main() {
    int n, x[50], maxim = -100, minim = 100;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) {
        if (maxim < x[i]) maxim = x[i];
        if (minim > x[i]) minim = x[i];
    }
    cout << minim << " " << maxim;
}
