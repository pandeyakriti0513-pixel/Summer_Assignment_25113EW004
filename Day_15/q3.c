//Q.Write a program to rotate array right
#include<stdio.h>
int main(){
    int i,n,temp;
    printf("Enter the number of elements present in array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    for(i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}