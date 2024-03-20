#include <iostream>
#include <vector>
using namespace std;

long long n;
vector< long long > v;

int main() {
    cin >> n;
    if (n == 0)
        return cout << "10", 0;
    if (n == 1)
        return cout << "1", 0;

    for (long long i = 9; i > 1; i--)
        while (n % i == 0) {
            n /= i;
            v.push_back(i);
        }
    if (n == 1) {
        for (long long i = v.size() - 1; i >= 0; i--)
            cout << v[i];
    }
    else
        cout << "-1\n";
}
