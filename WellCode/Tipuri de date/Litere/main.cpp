#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char x[256];
    int k = 0;
    cin.getline(x, 256);
    for (int i = 0; i < strlen(x); i++)
        if (x[i] != ' ')
            k++;
    cout << k;
}
