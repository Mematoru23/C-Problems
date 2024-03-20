#include <iostream>
#include <fstream>
using namespace std;
ifstream f("graf.in");
ofstream g("graf.out");

int mt[100][100], v[1000], n, k = 0;
void pop(int v[], int q, int n)
{
    while (q <= n)
    {
        v[q + 1] = v[q + 2];
        v[q] = v[q + 1];
        q++;
    }
}

int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> mt[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (mt[i][j] == 1)
            {
                g << i << " " << j << "\n";
                v[k++] = i;
                v[k++] = j;
            }
        }
    }
    g << "\n";
    for (int i = 1; i <= k; i++)
    {
        for (int j = i + 2; j <= k; j++)
        {
            if (v[i] == v[j + 1] && v[i + 1] == v[j])
            {
                pop(v, j, k);
            }
        }
    }
    for (int i = 1; i <= k; i++)
        g << v[i] << " " << v[i + 1] << "\n";
}

