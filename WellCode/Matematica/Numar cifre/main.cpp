#include <iostream>

using namespace std;

int n, i, cv, ve[1000000];
char v[1000000];
char cifra(int x)
{
    if (x < 10)
        return x + '0';
    return x - 10 + 'A';
}

int conversie(int n, int b)
{
    if (n < b)
    {
        v[++cv] = cifra(n) - '0';
        ve[v[cv]]++;
        return 0;
    }
    conversie(n / b, b);
    v[++cv] = cifra(n % b) - '0';
    ve[v[cv]]++;
}

int main()
{
    cin >> n;
    conversie(n, 4);
    for (int i = 0; i < 4; i++)
        cout << ve[i] << " ";
}
