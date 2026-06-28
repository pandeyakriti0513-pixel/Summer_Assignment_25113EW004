//Q.Write a program to check symmetric matrix
#include<stdio.h>
int main(){
    int i,j,row,sym=1;
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
    for(i=0;i<row && sym;i++){
        for(j=0;j<row && sym;j++){
            if(matrix[i][j]!=matrix[j][i]){
                sym=0;
            }
        }
    }
    printf(sym? "SYMMETRIC\n" : "NOT SYMMETRIC\n");
    return 0;
}
