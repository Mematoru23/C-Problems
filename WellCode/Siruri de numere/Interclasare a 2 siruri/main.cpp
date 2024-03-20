#include <iostream>

using namespace std;

int main()
{
    int v[100000], w[100000], x[200000];
    int n, m, k = 0;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> w[i];

    int i = 0, j = 0, p;
    while(i < n && j < m)
    {
        if (v[i] < w[j])
        {
            x[k] = v[i];
            k++;
            i++;
        }
        else
        {
            x[k] = w[j];
            k++;
            j++;
        }
    }
    if(i <= n)
    {
        while (i < n)
        {
            x[k] = v[i];
            i++;
            k++;
        }
    }
    if(j <= m)
    {
        while (j < m)
        {
            x[k] = w[j];
            j++;
            k++;
        }
    }
    for(p = 0; p < k; p++)
        cout << x[p] << " ";
}
