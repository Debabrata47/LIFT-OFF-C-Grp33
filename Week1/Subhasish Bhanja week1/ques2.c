#include <stdio.h>

void main()
{
    int a, b, m;

    printf("Enter 2 numbers");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        m = b;
    }
    else
    {
        m = a;
    }
    printf("max = %d", m);
}