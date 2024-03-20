#include <iostream>

using namespace std;

int k = 1;
void aduna(int a[], int b[])
{
    int i = 1, j = 1, n = a[0], m = b[0];
    while (k <= n || j <= m)
    {
        a[k] += b[j];
        k++;
        j++;
    }
    for (int i = 1; i <= k; i++)
    {
        if (a[i] == a[k - 1])
            if (a[k - 1] > 9)
                k++;
        if (a[i] > 9)
        {
            a[i] %= 10;
            a[i + 1]++;
        }
    }
    a[0] = k - 1;
}

int a[1000], b[1000];
int main()
{
    for (int i = 0; i <= a[0]; i++)
        cin >> a[i];
    for (int i = 0; i <= b[0]; i++)
        cin >> b[i];
    aduna(a, b);
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
}
/*
9 1 1 2 2 2 4 6 7 7
6 2 2 3 4 5 7
*/
