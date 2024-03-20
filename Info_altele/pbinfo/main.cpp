#include <bits/stdc++.h>
using namespace std;

int current, k, v[10000], cn;
void sumPow(int n) {
    if (!n)
        return;
    else {
        for (int i = 0; i < sqrt(cn); i++)
            if (n >= pow(2, i))
                current = pow(2, i);
        v[k++] = current;
        return sumPow(n - current);
    }
}

int main() {
    int n;
    cin >> n;
    cn = n;
    sumPow(n);
    sort(v, v + k);
    for (int i = 0; i < k; i++)
        cout << v[i] << " ";
}
