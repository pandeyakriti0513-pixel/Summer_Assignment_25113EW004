//Q. Write a program to find digonal sum
#include<stdio.h>
int main(){
    int i,j,row,sum=0;
    printf("Enter the number of rows/columns in the matrix(square):\n");
    scanf("%d",&row);
    int matrix[row][row];
    printf("Enter the matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++){
        sum+=matrix[i][i];
    }
    printf("Primary diagonal sum: %d\n",sum);
    sum=0;
    for(i=0;i<row;i++){
        sum+=matrix[i][row-1-i];
    }
    printf("Secondary diagonal sum: %d\n",sum);
    return 0;
}