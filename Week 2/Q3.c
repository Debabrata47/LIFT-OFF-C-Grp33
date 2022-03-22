// 3
#include <stdio.h>

int main() {
    int n,x,k=0;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    int arr[10]={};
    for (int i=0;i<n;i++){
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\nEnter the element to check: ");
    scanf("%d",&x);
    for (int i=0;i<n;i++){
        if (arr[i]==x){
            k+=1;
        }
    }
    if (k==0){
        printf("\nElement not found.");
    }
    else{
        printf("\nElement present %d times.",k);
    }
    return 0;
}