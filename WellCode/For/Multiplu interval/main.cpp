#include <iostream>

using namespace std;

int main() {
    int a, b, k;
    cin >> k >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % k == 0) cout << i << " ";
    }
}
