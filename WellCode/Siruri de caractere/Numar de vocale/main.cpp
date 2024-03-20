#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256], voc[] = "aeiouAEIOU";
    int k = 0;
    cin.getline(s, 256);
    for (int i = 0; i < strlen(s); i++)
        if (strchr(voc, s[i]))
            k++;
    cout << k;
}
