//Q. Write a program to intersection of arrays
#include<stdio.h>
int present(int arr[],int n,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n1,n2,i;
    printf("Enter the number of elements in the first array:\n");
    scanf("%d",&n1);
    printf("Enter the number of elements in the second array:\n");
    scanf("%d",&n2);
    printf("Enter the first array:\n");
    int arr_1[n1];
    for(i=0;i<n1;i++){
        scanf("%d",&arr_1[i]);
    }
    printf("Enter the second array:\n");
    int arr_2[n2];
    for(i=0;i<n2;i++){
        scanf("%d",&arr_2[i]);
    }
    printf("Intersection of array:\n");
    for(i=0;i<n1;i++){
        if(present(arr_2,n2,arr_1[i])){
            printf("%d ",arr_1[i]);
        }
    }
    return 0;
}