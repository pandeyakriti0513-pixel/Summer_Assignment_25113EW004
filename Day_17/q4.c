//Q. Write a program to find common elements
#include<stdio.h>
int main(){
    int i,j,k,n1,n2,n3;
    printf("Enter the number of elements in first array:\n");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter the first array:\n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number of elements in the second array:\n");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter the second array:\n");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    printf("Enter the number of elements in the third array:\n");
    scanf("%d",&n3);
    printf("Enter the third array:\n");
    int c[n3];
    for(i=0;i<n3;i++){
        scanf("%d",&c[i]);
    }
    printf("Common Elements:\n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            for(k=0;k<n3;k++){
                if(a[i]==b[j] && b[j]==c[k]){
                    printf("%d ",a[i]);
                }
            }
        }
    }

    return 0;
}