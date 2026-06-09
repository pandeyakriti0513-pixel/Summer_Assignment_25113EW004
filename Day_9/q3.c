//Q. Write a program to print repeated character pattern//
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter the number of rows:\n");
    scanf("%d",&rows);
    for(i=0;i<=rows-1;i++){
        for(j=0;j<=i;j++){
            printf("%c ",65+i);
        }
        printf("\n");
    }
    return 0;
}