#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[10000], a[10000];
    cin.getline(s, 10000);
    cin.get(a, 10000);
    char *p = strstr(a, s);
    while (p != nullptr)
    {
        cout << p - a + 1 << " ";
        p = strstr(p + 1, s);
    }
}
