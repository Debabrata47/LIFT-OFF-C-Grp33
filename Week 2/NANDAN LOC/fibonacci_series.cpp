#include<stdio.h>
int main()
{
	int count,a,b=1,c,i;
	printf("enter the number of terms:\n");
	scanf("%d",&count);
	printf("first %d terms of fibonacci series:\n",count);
		for(i=0;i<count;i++)
		{
			if (i<1)
			c=i;
			else
			{
				c=a+b;
				a=b;
				b=c;
			}
			printf("%d",c);
		}
		return 0;
}
