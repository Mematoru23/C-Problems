#include <bits/stdc++.h>
#include <vector>
using namespace std;
ifstream fin("graf.in");
ofstream fout("graf.out");

int nodes, edges, x, y, value, n_start, n_end;
int adj[100][100], size, sum, maxim = 1000;
bool visited[100];
vector<int> ls, coins;

void read()
{
    fin >> nodes;
    fin >> edges;
    for (int i = 1; i <= edges; i++)
    {
        fin >> x >> y >> value;
        adj[x][y] = adj[y][x] = value;
        coins.push_back(value);
    }
    fin >> n_start;
    fin >> n_end;
}

void DFS(int n_start, int n_end)
{
    ls.push_back(n_start);
    size++;
    visited[n_start] = true;
    if (n_start == n_end)
    {
        if (maxim > sum)
            maxim = sum;
        for (auto i = ls.begin(); i < ls.end(); i++)
            fout << *i << " ";
        fout << "-> " << sum << "\n";
    }
    for (int i = 1; i <= nodes; i++)
    {
        if (adj[n_start][i])
        {
            if (visited[i] == false)
            {
                sum += adj[n_start][i];
                DFS(i, n_end);
                sum = 0;
                visited[i] = false;
                size--;
                ls.pop_back();
            }
        }
    }
}

void show()
{
    for (int i = 1; i <= nodes; i++)
    {
        for (int j = 1; j <= nodes; j++)
            fout << adj[i][j] << " ";
        fout << "\n";
    }
    fout << "\n";
    for (auto i = coins.begin(); i < coins.end(); i++)
        fout << *i << " ";
    fout << "\n" << "\n";
}

int main()
{
    read();
    show();
    DFS(n_start, n_end);
    fout << maxim;
}
