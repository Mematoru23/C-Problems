#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    sort(x, x + n);
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
}
