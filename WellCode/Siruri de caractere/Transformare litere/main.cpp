#include <iostream>
#include <string.h>
using namespace std;

char s[1000];
int literaMare(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int literaMica(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

void transformare(char s[])
{
    int var;
    for (int i = 0; i < strlen(s); i++)
    {
        if (literaMare(s[i]))
        {
            var = s[i] - '0' + 32;
            s[i] = var + '0';
        }
        else if (literaMica(s[i]))
        {
            var = s[i] - '0' - 32;
            s[i] = var + '0';
        }
    }
}

int main()
{
    cin.getline(s, 1000);
    transformare(s);
    cout << s;
}
