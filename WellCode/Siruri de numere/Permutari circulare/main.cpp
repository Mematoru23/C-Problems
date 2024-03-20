#include <iostream>

using namespace std;

int v[1000000], n, k, p;
void citire()
{
    cin >> n >> k >> p;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
}

// -1 - dreapta
void dr(int &k)
{
    if (k > n)
        while (k > n)
            k -= n;
}

// 1 - stranga
void st(int &k)
{
    if (k > n)
        while (k > n)
            k -= n;
}

void permutare(int v[], int k, int p)
{
    if (n == 1)
        cout << v[1];
    else
    {
        if (p == 1) // stanga
        {
            st(k);
            for (int i = k + 1; i <= n; i++)
                cout << v[i] << " ";
            for (int i = 1; i <= k; i++)
                cout << v[i] << " ";
        }
        else if (p == -1) // dreapta
        {
            dr(k);
            for (int i = n - k + 1; i <= n; i++)
                cout << v[i] << " ";
            for (int i = 1; i <= n - k; i++)
                cout << v[i] << " ";
        }
    }
}

int main()
{
    citire();
    permutare(v, k, p);
}
