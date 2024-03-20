#include <iostream>

using namespace std;

int a[10000], rezultat[10000], k, x;
void inmulteste(int a[], int x, int rezultat[])
{
    int n = a[0];
    for (int i = 1; i <= n; i++)
    {
        rezultat[k] = a[i] * x;
        k++;
    }
    int rez = rezultat[n - 1], nr_rez = 0;
    while (rez)
    {
        rez /= 10;
        nr_rez++;
    }
    int c_rez = 0;
    for (int i = 0; i < k; i++)
    {
        if (rezultat[i] > 9)
        {
            c_rez = rezultat[i];
            rezultat[i] %= 10;
            while (c_rez > 9)
                c_rez /= 10;
            rezultat[i + 1] = rezultat[i + 1] + c_rez;
        }
    }
    cout << k + nr_rez - 1 << " ";
    for (int i = 0; i < k + nr_rez - 1; i++)
        cout << rezultat[i] << " ";
}

int main()
{
    for (int i = 0; i <= a[0]; i++)
        cin >> a[i];
    cin >> x;
    inmulteste(a, x, rezultat);
}
