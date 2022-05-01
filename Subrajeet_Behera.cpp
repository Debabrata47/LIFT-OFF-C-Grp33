2. #include<stdio.h>
    intmain()
{
    int i,j,k,count=1;
     for(i=1;i<=4;j++)
      { 
          
        for(j=1;j<=4-i;j++)
        {  
           printf("*");
        }
       for(k=1;k<=i;k++)
         {
           printf("%d",count);
             count++;
       }

3. #include<stdio.h>
   intmain()
    {
     	int a[100],freq[100];
        int size,i,j,count;
        printf("Enter size of array: ");
      for(i=0;i<size;i++)
       {
         scanf("%d", &a[i]);
        
           freq[i]=-1;
   }
       for(i=0;i<size;i++)
       {
   count=1;
       for(j=i+1;j<size;j++)
    {
      if (a[i]=a[j])
      { 
        count++;
           freq[i]=count;
          }
          }
        printf("\nfrequency of all elements of array : \n");
  }
} 
     return0;
}

5. 
#include <stdio.h>
int main()
{
 int a[5][5],i,j,max=0;
 
 printf("Enter any 5x5 matrix= ");
 for(i=0;i<=4;i++)
  {
   for(j=0;j<=4;j++)
    scanf("%d",&a[i][j]);
   printf("\n");
  }
 max=a[0][0];
 for(i=0;i<=4;i++)
   for(j=i+1;j<=4;j++)
    if(max<a[i][j])
     max=a[i][j];
 printf("Maximum value in Matrix is = %d",max);
  return0;
}