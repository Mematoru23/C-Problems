#include <iostream>
using namespace std;

const int oo = -(1 << 30);
int a[100], n, c[100];
/*
int subsirMax(float a[], float n) {
    int maxC = a[0];
    int altMax = a[0];
    for (int i = 1; i < n; i++) {
        maxC = max(a[i], a[i] + maxC);
        altMax = max(maxC, altMax);
    }
    return altMax;
}
*/
/*
void largestTwo(float a[], float n) {
    int maxC1 = oo, maxC2 = oo;
    for (int i = 0; i < n; i++) {
        if (a[i] > maxC1) {
            maxC2 = maxC1;
            maxC1 = a[i];
        }
        else if (a[i] > maxC2) {
            maxC2 = a[i];
        }
    }
    cout << maxC1 << " " << maxC2;
}
*/
void
int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    //cout << subsirMax(a, n);
    largestTwo(a, n);
}

