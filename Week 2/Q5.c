// 5
#include <stdio.h>

int main() {
    int m=0,a[5][5]={};
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("\nEnter element %d.%d:  ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (a[i][j]>m){
                m=a[i][j];
            }
        }
    }
    printf("Max is %d",m);
    return 0;
}