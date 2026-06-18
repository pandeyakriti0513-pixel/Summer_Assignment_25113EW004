//Q. Write a program to find sum and average of array//
#include<stdio.h>
int main(){
    int i,n,sum=0,avg;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("SUM: %d\nAVERAGE: %d",sum,avg);
    return 0;
}