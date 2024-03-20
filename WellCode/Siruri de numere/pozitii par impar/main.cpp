#include <iostream>

using namespace std;

int main() {
    int x[100000], n, sum_par = 0, sum_impar = 0, dif;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i];
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) sum_par += x[i];
        else sum_impar += x[i];
    }
    dif = sum_par - sum_impar;
    cout << dif;
}

