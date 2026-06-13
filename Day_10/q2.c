//Q. Write a program to print reverse pyramid//
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        //spaces//
        for(j=1;j<=i;j++){
            printf(" ");
        }
        //stars//
        for(j=1;j<=2*(n-i)-1;j++){
            printf("*");
        }
        //spaces//
        for(j=1;j<=i;j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}