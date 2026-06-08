//Q. Write a program to print character triangle
//A
//AB
//ABC
//ABCD
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter the number of rows:\n");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++){
        for(j=0;j<i;j++){
            printf("%c ",65+j);
        }
        printf("\n");
    }
    return 0;

}