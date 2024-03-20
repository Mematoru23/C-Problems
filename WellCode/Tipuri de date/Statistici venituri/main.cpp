#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x[1000], xc[1000], n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    if (x[1] < x[2])
    {
        for (int i = 1; i < n; i++)
            xc[i] = ((x[i + 1] - x[i]) * 100) / x[i];
        cout << "Veniturile au crescut cu: ";
        for (int i = 1; i < n; i++)
            if (xc[i] > 100) cout << ">100%" << " ";
            else
                cout << fixed << setprecision(3) << xc[i] << "%" << " ";
    }
    else if (x[1] == x[2])
        cout << "Veniturile au ramas la fel";
    else
    {
        for (int i = 1; i < n; i++)
            xc[i] = abs(((x[i + 1] - x[i]) * 100) / x[i]);
        cout << "Veniturile au scazut cu: ";
        for (int i = 1; i < n; i++)
            if (xc[i] > 100) cout << ">100%" << " ";
            else
                cout << fixed << setprecision(3) << xc[i] << "%" << " ";
    }

}
