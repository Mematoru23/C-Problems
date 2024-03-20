#include <iostream>

using namespace std;

void sortare(int n, int v[100])
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
}

int main()
{
    int n, v[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sortare(n, v);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}
