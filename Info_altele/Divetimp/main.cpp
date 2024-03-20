#include <iostream>
using namespace std;

int n, v[100];

void citire(int v[], int &n) {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

int suma(int v[], int left, int right) {
    if (left == right)
        return v[left];
    else {
        int mid = (left + right - 1) / 2;
        return suma(v, left, mid) + suma(v, mid + 1, right);
    }
}

int main() {
    citire(v, n);
    cout << suma(v, 0, n);
}
