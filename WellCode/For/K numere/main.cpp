#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cout << n - i << " ";
    }
}
