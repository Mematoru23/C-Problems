#include <iostream>

using namespace std;

double v[100000], x, y;
int ok;
void inserareMedie(int &n, int &m, double mt[51][51], int k)
{
    for (int j = 0; j < m; j++)
    {
        x = 0, y = 0;
        for (int p = 0; p < n; p++)
            x += mt[p][j];
        v[ok++] = x / n;
    }
    for (int i = n; i > k; i--)
        for (int j = 0; j < m; j++)
            mt[i][j] = mt[i - 1][j];
    for (int j = 0; j < m; j++)
        mt[k][j] = v[j];
    n++;
}
/*
5 7 3
2 3 3 1 5 2 3
7 3 4 4 7 0 0
3 2 3 1 5 2 2
2 2 2 2 2 2 2
1 1 1 1 1 1 1*/
/*
5 4 3
-1 -2 -5 -1
-6 -2 -6 -3
-1 -1 -1 -1
-3 -6 -1 -2
-5 -6 -1 -3
*/
int main()
{
    double mt[51][51];
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mt[i][j];
    cout << "\n";
    inserareMedie(n, m, mt, k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << mt[i][j] << " ";
        cout << "\n";
    }
}
