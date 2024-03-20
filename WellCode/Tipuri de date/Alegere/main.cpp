#include <iostream>
using namespace std;

long long ckn (long long n, long long k)
{
    if (k == 0) return 1;
    return ckn(n, k - 1) * (n - k + 1) / k;
}

int main()
{
    long long n;
    cin >> n;
    cout << ckn(n, 2);
}
