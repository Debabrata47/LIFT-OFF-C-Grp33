// 4
#include <stdio.h>

int main() {
    int p=0,n=0,e=0,o=0,a[25]={};
    for(int i=0;i<25;i++){
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<25;i++){
        if (a[i]>0){
            p+=1;
        }
        else if (a[i]<0){
            n+=1;
        }
        if(a[i]%2==0){
            e+=1;
        }
        else{
            o+=1;
        }
    }
    printf("\n\nOdd = %d\nEven = %d\nPositive = %d\nNegative = %d\n",o,e,p,n);
    return 0;
}