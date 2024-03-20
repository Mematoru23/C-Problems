#include <iostream>
#include <fstream>
using namespace std;
ifstream f("graf.in");
ofstream g("graf.out");

int v[100], cv[100], n, k, c;

void lant_elem_ciclu(int v[], int n)
{
    int i = 0, j = 1;
    while (i < n - 1)
    {
        while (j < n)
        {
            if (v[0] == v[n - 1])
            {
                k = -1;
                break;
            }
        }
        if (k == -1)
            break;
    }
    if (k == -1)
        g<< "Secventa este un ciclu.";
}

int main()
{
    f >> n;
    for (int i = 0; i <= n; i++)
    {
        f >> v[i];
        cv[v[i]]++;
    }
    int p = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < cv[i]; j++)
            if (j == 1) p++;
    if (p > 0 && v[0] != v[n - 1])
        g << "Secventa este lant neelementar.";
    else if (p == 0 && v[0] != v[n - 1])
        g << "Secventa este un lant elementar.";
    else
        lant_elem_ciclu(v, n);
}
