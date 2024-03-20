#include <bits/stdc++.h>
#include <vector>
#include <fstream>
using namespace std;
ifstream fin("canguri.in");
ofstream fout("canguri.out");
int main()
{
    int x, y, a, b, z, t, maxim = 0;
    fin >> x >> y;
    fin >> z >> t;
    fin >> a >> b;
    if (y < t)
        maxim = t;
    else
        maxim = y;
    if (maxim < b)
        maxim = b;
    if (maxim == y)
    {
        fout << x << "\n";
        fout << round(800 / y);
    }
    else if (maxim == t)
    {
        fout << z << "\n";
        fout << round(800 / t) + 1;
    }
    else if (maxim == b)
    {
        fout << a << "\n";
        fout << round(800 / b);
    }
}
