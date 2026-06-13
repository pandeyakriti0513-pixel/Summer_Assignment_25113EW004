//Q. Write a program to print hollow square pattern//
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter the number of rows:\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        if(i==1||i==rows){
        for(j=1;j<=rows;j++){
            printf("*");
        }
        printf("\n");
    }
    else{
    printf("*");
    for(j=1;j<=rows-2;j++){
        printf(" ");
    }
    printf("*\n");
    }}
    return 0;
}