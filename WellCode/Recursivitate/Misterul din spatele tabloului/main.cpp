#include <iostream>

using namespace std;

int aux[1000][1000];
void rotireMatStg(int &N, int &M, int A[1000][1000], int K)
{
    if (K == 0)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= M; j++)
                cout << A[i][j] << " ";
            cout << "\n";
        }
        return;
    }
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            aux[i][j] = A[j][M - j + i];
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            A[i][j] = aux[i][j];
    rotireMatStg(N, M, A, K - 1);
}

int n, m, A[1000][1000], k;
int main()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> A[i][j];
    rotireMatStg(n, m, A, k);
}
