#include <iostream>

using namespace std;

int main() {
    int n, x[1000];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) cout << x[i] * 2 << " ";
        else if (i % 2 != 0) cout << x[i] - 1 << " ";
    }
}
