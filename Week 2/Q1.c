// 1
#include <stdio.h>
#include <math.h>

int main() {
    int x;
    float r=0;
    printf("Enter number to find its natural logarithm: ");
    scanf("%d",&x);
    float y=x-1;
    if (x>=0){
        for(int i=1;i<8;i++){
            float z=pow(y/x,i)/i;
            r+=z;
        }
        printf("\nln %d = %f (appx.)",x,r);
    }
    return 0;
}