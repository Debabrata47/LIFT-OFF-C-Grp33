#include<stdio.h>
int main()
{
    int a;
    printf(" Enter a number to check odd or even");
    scanf("%d",&a);
    switch(a%2)
    {
        case 0:
        printf(" It is an even number");
        break;
        case 1:
        printf(" It a odd number");
        break;
    }
    return 0;
}