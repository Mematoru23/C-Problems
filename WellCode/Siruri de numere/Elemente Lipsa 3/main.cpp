#include <iostream>
using namespace std;

int s[100000], t[100000], n, m;
int main()
{

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n - m; i++)
        cin >> t[i];
    if (m == 0) cout << "Nu s-au pierdut date";
    else
    {
        int i = 1, j = 1;
        while (i <= n && j <= n - m + 1)
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
            }
            else
            {
                cout << s[i] << " ";
                i++;
            }
        }
    }

}
