#include <iostream>
#include <string.h>
using namespace std;

char s[8];
long long strToNumber(char s[])
{
    long long c = 0;
    for (long long i = 0; i < strlen(s); i++)
        if (s[i] >= '0' && s[i] <= '9')
            c = c * 10 + (s[i] - '0');
    return c * c;
}

int main()
{
    cin.getline(s, 9);
    cout << strToNumber(s);
}
