#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("dfs.in");
ofstream fout("dfs.out");

int mt[600][600], n, m, x, y, viz[1000000], nrcomp, val;
void citire()
{
    fin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        fin >> x >> y;
        mt[x][y] = 1;
        mt[y][x] = 1;
    }
}

void DFS(int val)
{
    viz[val] = nrcomp;
    for (int i = 1; i <= n; i++)
        if (mt[val][i] && !viz[i])
            DFS(i);
}

void COMP()
{
    for (int i = 1; i <= n; i++)
        if (!viz[i])
        {
            nrcomp++;
            DFS(i);
        }
}

void afisare()
{
    for (int i = 1; i <= nrcomp; i++)
    {
        fout << "C" << i << ": ";
        for (int j = 1; j <= n; j++)
            if (viz[j] == i)
                fout << j << " ";
        fout << "\n";
    }
}

int main()
{
    citire();
    COMP();
    afisare();
    fout << nrcomp;
}
