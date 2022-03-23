#include<stdio.h>
int main()
{
    int i, sum1 =0, sum2 =0;
    for(i=1; i<=10;i++)
    {
        if(i%2==0)
        sum1=sum1+i;
        else
        sum2=sum2+i;
    }
    printf("The sum of even numbers =%d \n", sum1);
    printf("The sum of odd numbers=%d \n", sum2);
}
