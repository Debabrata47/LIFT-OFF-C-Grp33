// 2
#include<stdio.h>
int main()
{
    int a,b;
    printf("Please give two numbers:\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("\nBigger number is %d",a);
    }
    else
    {
        printf("\nBigger number is %d",b);
    }
    return 0;
}