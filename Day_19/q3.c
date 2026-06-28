//Q. Write a program to transpose matrix
#include<stdio.h>
int main(){
    int i,j,row,col;
    printf("Enter the number of rows in the matrix:\n");
    scanf("%d",&row);
    printf("Enter the number of columns:\n");
    scanf("%d",&col);
    int matrix[row][col];
    int transpose[col][row];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The original matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
    printf("Transpose of the given matrix:\n");
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}