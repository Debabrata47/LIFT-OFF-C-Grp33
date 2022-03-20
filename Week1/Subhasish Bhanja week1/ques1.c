#include <stdio.h>
void main(){
    char name[15],branch[3],hobbies[30];
    int reg;

    printf("enter your name ");
    gets(name);

    printf("enter your branch ");
    gets(branch);

    printf("enter your hobbies ");
    gets(hobbies);

    printf("enter your Reg. No. ");
    scanf("%d",&reg);
  
  printf("\n");
    printf("Name:"); puts(name);
    printf("branch:"); puts(branch);
    printf("hobbies:"); puts(name);
    printf("reg no.: %d",reg);
}
