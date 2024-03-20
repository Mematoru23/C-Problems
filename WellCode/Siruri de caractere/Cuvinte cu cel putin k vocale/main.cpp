#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
ifstream fin("date.in");

char s[261], voc[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
int k, nr_voc = 1, t, ok;

int litera(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

int main()
{
    fin >> k;
    fin.getline(s, 261, EOF);
    int i = 0, n = strlen(s);
    while (i < n)
    {
        if (litera(s[i]))
        {
            nr_voc = 0;
            int poz = i;
            while (litera(s[i]))
            {
                if (strchr(voc, s[i]))
                    nr_voc++;
                i++;
            }
            if (nr_voc >= k)
            {
                for (int j = poz; j < i; j++)
                    cout << s[j];
                cout << "\n";
            }
        }
        else
            i++;
    }
}
