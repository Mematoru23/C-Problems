#include <iostream>

using namespace std;

int main() {
    int x[100000], n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    for (int i = n; i >= 1; i--)
        cout << x[i] << " ";
}
