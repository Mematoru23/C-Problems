#include <iostream>
#include <string.h>
using namespace std;

char s[260];
int v[1000], maxim = -100;
int main()
{
    cin.getline(s, 260);
    for (int i = 0; i < strlen(s); i++)
    {
        v[s[i] - '0']++;
    }
}
