#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100);
    int n = strlen(s);
    char *p = s;
    for (int i = n; i > 0; i--)
    {
        for (int j = i - 1; j < n; j++)
            cout << s[j];
        cout << "\n";
    }
}
