#include<stdio.h>
#include<math.h>
int main()
{
    int i,num,snum,fd,ld,d;
    printf("Enter a number");
    scanf("%d", &num);
    ld=num%10;
    d=(int)log10(num);
    fd=(int)num/(pow(10,d));
    snum=d;
    snum*=(int)(pow(10,d));
    snum+=num%((int)(pow(10,d)));
    snum-=ld;
    snum+=fd;
    printf("The original number%d\n",num);
    printf("the number after swapping%d\n", snum);
}