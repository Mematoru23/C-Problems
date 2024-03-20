#include <iostream>
using namespace std;

int v[100], n;
void citire(int v[], int n) {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

int cmmdc(int a, int b) {
    if (!b)
        return a;
    else
        return cmmdc(b, a % b);
}

int divide(int v[], int left, int right) {
    if (left == right)
        return v[left];
    else {
        int mid = (left + right - 1) / 2;
        return cmmdc(divide(v, left, mid), divide(v, mid + 1, right));
    }
}

int main() {
    citire(v, n);
    cout << divide(v, 0, n);
}
