#include <iostream>
#include <fstream>
using namespace std;
ifstream f("graf.in");
ofstream g("graf.out");

int mt[100][100], n, x, y;

int main()
{
    f >> n;
    while (f >> x >> y)
    {
        mt[y][x] = 1;
        mt[x][y] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            g << mt[i][j] << " ";
        g << "\n";
    }
}
