//Q. Write a program to sort array in decending order
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of elements present in the array:\n");
    scanf("%d",&n);
    printf("Enter the array:\n");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Array sorted in decending order:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}