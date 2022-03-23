#include<stdio.h>
#include<string.h>
int main()
{
    int a[50], b[50], c[100], i, j, d[100];
    printf("Enter first string\n");
    gets(a);
    printf("Enter second string\n");
    gets(b);
    i=j=0;
    while(a[i]='\0')
    {
        c[i]=a[i];
        i++;
    }
    while(b[j]='\0')
    {
        c[i]=b[j];
        i++; j++;
    }
    c[i]='\0';
    int l=0;
    for(i=strlen(c)-1; i>0; i--)
    {
        d[l]=c[i];
        l++;
    }
    d[l]='\0';
    printf("\n Reverse of the string %d",d);
}
