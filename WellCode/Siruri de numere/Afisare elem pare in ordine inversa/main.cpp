#include <iostream>

using namespace std;

int main() {
    int n, x[1000];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i];
    for (int i = n; i >= 1; i--)
        if(x[i] % 2 == 0) cout << x[i] << " ";
}
