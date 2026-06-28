//Q. Write a program to merge arrays
#include<stdio.h>
int main(){
    int n1,n2,i;
    printf("Enter the number of elements in first array:\n");
    scanf("%d",&n1);
    int arr_1[n1];
    printf("Enter the first array:\n");
    for(i=0;i<n1;i++){
        scanf("%d",&arr_1[i]);
    }
    printf("Enter the number of elements in the second array:\n");
    scanf("%d",&n2);
    int arr_2[n2];
    printf("Enter the second array:\n");
    for(i=0;i<n2;i++){
        scanf("%d",&arr_2[i]);
    }
    int n3=n1+n2;
    int arr_m[n3];
    for(i=0;i<n3;i++){
        if(i<n1){
            arr_m[i]=arr_1[i];
        }
        else{
            arr_m[i]=arr_2[i-n1];
        }
    }
    printf("FINAL ARRAY:\n");
    for(i=0;i<n3;i++){
        printf("%d ",arr_m[i]);
    }
    return 0;
}