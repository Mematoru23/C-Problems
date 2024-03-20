#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x[1000], n, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        s += x[i];
    }
    cout << fixed << setprecision(2) << s / n;
}
