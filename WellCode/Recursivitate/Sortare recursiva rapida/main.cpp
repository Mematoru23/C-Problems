#include <iostream>
using namespace std;

void rec(int x[], int n)
{
    if(n == 1)
        return;
    else
    {
        int aux;
        for(int i=1; i<n; i++)
            if(x[i] > x[i+1])
            {
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
            }
        rec(x,n-1);
    }
}
int x[100001], n;
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> x[i];
    rec(x, n);
    for(int i = 1; i <= n; i++)
        cout << x[i] << " ";
}
