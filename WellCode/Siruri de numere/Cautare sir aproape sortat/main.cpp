#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int x[50000], v[10000], n, k, minim = numeric_limits<int>::max(), pm = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        if (minim > x[i])
        {
            minim = x[i];
            pm = i;
        }
    }
    cin >> k;
    for (int i = 1; i <= k; i++)
        cin >> v[i];
    int dr = 0, st = 0, mij, ok = 1;
    for (int i = 1; i <= k; i++)
    {
        if (v[i] < minim)
            ok = 0;
        else if (v[i] >= minim && v[i] < x[1])
        {
            st = pm, dr = n, mij = 0;
            while (st < dr)
            {
                mij = (st + dr) / 2;
                if (x[mij] < v[i])
                    st = mij + 1;
                else
                    dr = mij;
            }
        }
        else if (v[i] >= x[1])
        {
            st = 1, dr = pm - 1, mij = 0;
            while (st < dr)
            {
                mij = (st + dr) / 2;
                if (x[mij] < v[i])
                    st = mij + 1;
                else
                    dr = mij;
            }
        }
        if (v[i] == x[st])
            cout << v[i] << " se gaseste in sir\n";
        else if (ok == 0)
            cout << v[i] << " nu se gaseste in sir\n";
        else
            cout << v[i] << " nu se gaseste in sir\n";
    }
}
