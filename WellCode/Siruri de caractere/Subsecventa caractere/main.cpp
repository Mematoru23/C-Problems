#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[200], s2[200];
    cin.getline(s1, 200);
    cin.getline(s2, 200);
    char *p = strstr(s1, s2);
    while (p != 0)
    {
        if (strstr(s1, s2))
        {
            cout << "DA";
            break;
        }
        p = strstr(p + 1, s2);
    }
    if (p == 0)
        cout << "NU";
}
