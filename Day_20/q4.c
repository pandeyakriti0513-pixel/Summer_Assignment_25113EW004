//Q.Write a program to find column-wise sum
#include<stdio.h>
int main(){
    int i,j,row,col,sum;
    printf("Enter the number of rows in the matrix:\n");
    scanf("%d",&row);
    printf("Enter the number of columns in the matrix:\n");
    scanf("%d",&col);
    int matrix[row][col];
    printf("Enter the matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<col;i++){
        sum=0;
        for(j=0;j<row;j++){
            sum+=matrix[j][i];
        }
        printf("Column=%d->Sum=%d\n",i+1,sum);
    }
    return 0;
}