/*Q 2. Write a program to find maximum between two numbers. (In this question, you’ll learn the use of if-else condition*/

# include <stdio.h>
void main()
{
    int x,y;
    printf("Enter the 2 no.s : ");
    scanf("%d %d",&x,&y);
    if (x>y)
    {
        printf("%d is maximum",x);
    }
    else
    {
        printf("%d is maximum",y);
    }

}
