#include <iostream>

using namespace std;

int n, v[100000], valid, sum, i, j, d, ci, k, vl;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    valid = 1;
    while (i <= n)
    {
        sum++;
        ci = i;
        if (v[0] == v[1] || v[0] < 0)
        {
            valid = 0;
            break;
        }
        if (v[ci] + v[ci + 1] == 0)
        {
            d++;
            sum++;
            i += 2;
            v[ci] = 0;
            v[ci + 1] = 0;
        }
        else
        {
            j = ci;
            if (v[j] == abs(v[ci]))
            {
                sum += 2;
                v[j] = 0;
                v[ci] = 0;
                i++;
            }
        }
        vl = valid;
    }
    if (vl== 0)
        cout << -1;
    else
        cout << d << "\n" << sum;
}
