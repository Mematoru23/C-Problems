#include <stdio.h>
#include <math.h>

float semiPer(int a, int b, int c)
{
    return (a + b + c) / 2.0;
}

float aria(int a, int b, int c)
{
    float p = semiPer(a, b, c);
    return sqrt(p*(p - a)*(p - b)*(p - c));
}

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    float pp = aria(a, b, c);
    printf("Aria este: %f", pp);
}
