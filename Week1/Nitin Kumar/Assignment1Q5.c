/*Q.5.Write a C program to enter the radius of a circle and find its diameter, circumference
and area.*/

# include <stdio.h>
const float pi = 3.14;
void main()
{
    float r,d,C,A;
    printf("Enter the radius :");
    scanf("%f",&r);
    d = (r/2);
    C = 2*pi*r;
    A = pi*r*r;
    printf("Diameter is %f \nCircumference is %f \nArea is %f",d,A,C);
}
