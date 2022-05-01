#include <stdio.h>
#include <math.h>
int main()
{
    int n,fd, ld,digits, swapnum;
    printf("Enter number = ");
    scanf("%d", &n);
    ld = n % 10;
    digits    = (int)log10(n);
    fd = (int) (n / pow(10, digits));
    swapnum  = ld;
    swapnum *= (int) round(pow(10, digits));
    swapnum += n % ((int)round(pow(10, digits)));
    swapnum -= ld;
    swapnum += fd;
    printf("Number after swapping first and last digit: %d", swapnum);
    return 0;
}
