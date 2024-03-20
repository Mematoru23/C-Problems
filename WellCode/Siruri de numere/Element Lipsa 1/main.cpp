#include <iostream>

using namespace std;

int main()
{
    int n, x = 0, s[1001], t[1001];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n - 1; i++)
        cin >> t[i];
    for (int i = 1; i <= n; i++)
    {
        if (i == n) x = s[i];
        else
            if (s[i] != t[i])
            {
                x = s[i];
                break;
            }
    }
    cout << x;
}
