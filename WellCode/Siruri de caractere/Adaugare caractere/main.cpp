#include <iostream>
#include <string.h>
using namespace std;

char s[256], cs[256], voc[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
void addChars(char s[])
{
    int nr = strlen(s), k = 0;
    for (int i = 0; i <= nr; i++)
    {
        if (strchr(voc, s[i]))
        {
            cs[k] = s[i];
            k++;
            cs[k] = '$';
            k++;
        }
        else
        {
            cs[k] = s[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
        s[i] = cs[i];
}

int main()
{
    cin.getline(s, 256);
    addChars(s);
    cout << s;
}
