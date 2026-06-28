//Q.Write a program to multiply matrices
#include<stdio.h>
int main(){
    int i,j,k,row1,col1,col2;
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
    printf("Enter the number of columns in the second matrix:\n");
    scanf("%d",&col2);
    int arr_2[col1][col2];
    printf("Enter the second matrix:\n");
    for(i=0;i<col1;i++){
        for(j=0;j<col2;j++){
            scanf("%d",&arr_2[i][j]);
        }
    }
    int product[row1][col2];
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            product[i][j]=0;
            for(k=0;k<col1;k++){
                product[i][j]+=arr[i][k]*arr_2[k][j];
            }
        }
    }
    printf("Product of the two matrices:\n");
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}