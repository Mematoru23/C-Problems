#include <iostream>

using namespace std;

int main()
{
    int n, x = 0, k = 0, s[1001], t[1001];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n - 1; i++)
        cin >> t[i];
    int j = 0, i = 0;
    for (i = 1; i <= n; i++)
    {
        k = 0;
        for (j = 1; j <= n - 1; j++)
        {
            if (s[i] == t[j])
            {
                k++;
            }
        }
        if (k < 1)
        {
            x = s[i];
            break;
        }
    }
    cout << x;
}
