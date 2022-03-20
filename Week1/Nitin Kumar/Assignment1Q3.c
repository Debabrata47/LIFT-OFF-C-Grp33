/*Q 3. Write a C program to check whether a number is even or odd using switch case. 
(In this question, you’ll apply the switch case concept)*/

# include <stdio.h>
void main()
{
    int a;
    printf("Enter the value of the no. :");
    scanf("%d",&a);
    switch(a%2) {
        case 0:
        printf("The no is even ");
        break;
        default:
        printf("The no. is odd");
        break;
    }
}
