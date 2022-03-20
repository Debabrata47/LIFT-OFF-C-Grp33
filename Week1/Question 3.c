// 3
#include<stdio.h>
int main()
{
    int a,b;
    printf("Please give a number:\n");
    scanf("%d",&a);
    b=a%2;
    switch (b){
        case 0 :
            printf("%d is even",a);
            break;
        default:
            printf("%d is odd",a);
            break;
    }
    return 0;
}