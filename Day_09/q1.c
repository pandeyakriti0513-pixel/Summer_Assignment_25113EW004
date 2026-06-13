//Q. Write a program to print reverse star pattern
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter the number of rows:\n");
    scanf("%d",&rows);
    for(i=0;i<=rows-1;i++){
        for(j=1;j<=rows-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}