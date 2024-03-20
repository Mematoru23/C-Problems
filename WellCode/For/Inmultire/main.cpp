#include <iostream>

using namespace std;

int main() {
    int a, b, x = 1;
    cin >> a >> b;
    for (int i = 1; i <= b; i++) {
        x = a * i;
        cout << x << " ";
    }
}
