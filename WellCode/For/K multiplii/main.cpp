#include <iostream>

using namespace std;

int main() {
    int n, k, p, m, s;
    cin >> n >> k >> p;
    if (n % p != 0){
        s = n % p;
        for (int i = 1; i <= s; i++) m = n - i;
        cout << m << " ";
        for (int i = 1; i < k; i++) {
            m = m - p;
        cout << m << " ";
        }
    }
    else {
        m = n;
        for (int i = 0; i < k; i++) {
            m = m - p;
        cout << m << " ";
        }
    }
}
