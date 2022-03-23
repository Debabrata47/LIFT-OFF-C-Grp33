#include<stdio.h>
int main()
{
    int a[2][2] = {
                   {2,4},
                   {6,8}
    };
    int b[2][2] = {{5,7},{1,9}};
    int sum[2][2], prod[2][2];
    sum[2][2]=a[2][2] + b[2][2];
    printf("The sum is%d",sum[2][2]);
    printf("The product is%d",prod[2][2]);
}