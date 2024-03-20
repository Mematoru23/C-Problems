#include <iostream>

using namespace std;

int romb()
{

}

int main()
{
    int n;
    cin >> n;
    int k = n / 2 - 1;
    for (int i = 1; i < n / 2 + 1; i++)
    {
        for (int j = 1; j < n - i - k; j++)
            cout << " ";
        cout << "*";
        for (int j = 1; j < 2 * i - 2; j++)
            cout << " ";
        if (i == 1) cout << "\n";
        else cout << "*\n";
    }
    for (int i = n / 2 + 1; i > 0; i--)
    {
        for (int j = 1 + k; j < n - i; j++)
            cout << " ";
        cout << "*";
        for (int j = 1; j < 2 * i - 2; j++)
            cout << " ";
        if (i == 1) cout << "\n";
        else cout << "*\n";
    }
}
