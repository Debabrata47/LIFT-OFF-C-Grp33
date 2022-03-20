#include<stdio.h>

void main(){
    int n;

    printf("Enter your number");
    scanf("%d",&n);

    switch (n%2)
    {
    case 0:
        printf("The no is EVEN");
        break;
    
    case 1:
    printf("The no is ODD");
        break;
    }
}