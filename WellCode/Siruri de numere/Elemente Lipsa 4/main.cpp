#include <iostream>

using namespace std;

int main()
{
    int n, m, x = 0, s[1001], t[1001];
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n - m; i++)
        cin >> t[i];
    if (m == 0) cout << "Nu s-au pierdut date";
    else
    {
        int j = 0, i = 0, k;
        for (i = 1; i <= n; i++)
        {
            k = 0;
            for (j = 1; j <= n - m; j++)
            {
                if (s[i] >= t[j] && s[i] <= t[j])
                    k++;
            }
            if (k < 1)
            {
                cout << s[i] << " ";
            }
        }
    }

}
