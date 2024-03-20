#include <iostream>

using namespace std;

int k = 1;
void intersectie3(int A[], int B[], int C[])
{
    int i = 1, j = 1, n = A[0], m = B[0];
    if (n < m)
        while (i <= n)
        {
            if (A[i] == B[j])
            {
                C[k++] = A[i];
                i++;
                j++;
            }
            else if (A[i] < B[j])
                i++;
            else if (A[i] > B[j])
                j++;
        }
    else
        while (j <= m)
        {
            if (A[i] == B[j])
            {
                C[k++] = A[i];
                i++;
                j++;
            }
            else if (A[i] < B[j])
                i++;
            else if (A[i] > B[j])
                j++;
        }
    C[0] = k - 1;
}

int A[100000], B[100000], C[200000];
int main()
{

    for (int i = 0; i <= A[0]; i++)
        cin >> A[i];
    for (int i = 0; i <= B[0]; i++)
        cin >> B[i];
    intersectie3(A, B, C);
    for (int i = 0; i < k; i++)
        cout << C[i] << " ";
}
/*
9 1 1 2 2 2 4 6 7 7
6 2 2 3 4 5 7
*/
