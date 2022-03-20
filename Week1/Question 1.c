// 1
#include<stdio.h>
int main()
{
    char n[40],b[40],h[100];
    int r;
    printf("\nName:\n");
    scanf("%s",&n);
    printf("\nBranch:\n");
    scanf("%s",&b);
    printf("\nHobbies:\n");
    scanf("%s",&h);
    printf("\nRoll no.:\n");
    scanf("%d",&r);
    printf("\nName: %s",n);
    printf("\nBranch: %s",b);
    printf("\nHobbies: %s",h);
    printf("\nRoll no.: %d",r);
    return 0;
}