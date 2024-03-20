#include <iostream>

using namespace std;

int n, k;
bool v[50000000];
int main()
{
    cin >> n;
    for (int i = 2; i <= n; i++)
        v[i] = true;
    for (int i = 2; i * i <= n; i++)
        if (v[i])
            for (int j = i; j <= n / i; j++)
                v[i * j] = false;
    for (int i = 2; i <= n; i++)
        if (v[i])
            k++;
    cout << k;
}
