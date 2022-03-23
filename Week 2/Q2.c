// 2
#include <stdio.h>

int main() {
    int n=4,a=1;
    printf("Pattern:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            printf("\t");
        }
        int j=n-1-i;
        while (j<n+i){
            printf("%d\t\t",a++);
            j+=2;
        }
        printf("\n");
    }
    return 0;
}