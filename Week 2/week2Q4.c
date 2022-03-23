#include<stdio.h>
int main()
{
    int a=0, b=1, i, p=0, n;
    printf("Enter the number of elements");
    scanf("%d",n);
    for(i=1;i<=n;++i)
    {
        p=a+b;
        printf("%d",p);
        a=b;
        b=p;
    }
    return 0;
}