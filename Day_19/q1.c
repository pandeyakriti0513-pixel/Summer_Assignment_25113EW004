//Q. Write a program to add the matrices
#include<stdio.h>
int main(){
    int i,j,row1,col1;
    printf("Enter the number of rows in matrix:\n");
    scanf("%d",&row1);
    printf("Enter the number of columns in the matrix:\n");
    scanf("%d",&col1);
    int arr[row1][col1];
    printf("Enter the first matrix:\n");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int arr_2[row1][col1];
    printf("Enter the second matrix:\n");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&arr_2[i][j]);
        }
    }
    int sum[row1][col1];
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            sum[i][j]=arr[i][j]+arr_2[i][j];
        }
    }
    printf("Sum of the two matrices:\n");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}