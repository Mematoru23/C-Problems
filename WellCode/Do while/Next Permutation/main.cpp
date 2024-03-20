#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x[10], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    do
    {
        for (int i = 0; i < n; i++)
            cout << x[i] << " ";
        cout << "\n";
    }while (next_permutation(x, x + n));
}
