#include <iostream>

using namespace std;

int k = 1;
void aduna(int a[], int b[], int rezultat[])
{
    int i = 1, j = 1, n = a[0], m = b[0];
    while (i <= n || j <= m)
    {
        rezultat[k++] = a[i] + b[j];
        i++;
        j++;
    }
    for (int i = 1; i <= k; i++)
    {
        if (rezultat[i] == rezultat[k - 1])
            if (rezultat[k - 1] > 9)
                k++;
        if (rezultat[i] > 9)
        {
            rezultat[i] %= 10;
            rezultat[i + 1]++;
        }
    }
    rezultat[0] = k - 1;
}

int a[1000], b[1000], rezultat[1000];
int main()
{
    for (int i = 0; i <= a[0]; i++)
        cin >> a[i];
    for (int i = 0; i <= b[0]; i++)
        cin >> b[i];
    aduna(a, b, rezultat);
    for (int i = 0; i < k; i++)
        cout << rezultat[i] << " ";
}
/*
9 1 1 2 2 2 4 6 7 7
6 2 2 3 4 5 7
*/
