//Q. Write a program to second largest element
#include<stdio.h>
int main(){
    int i,n,j,temp;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int largest=arr[n-1];
    for(i=n-2;i>=0;i--){
        if(arr[i]!=largest){
    printf("The second largest element is: %d",arr[i]);
    return 0;
}}
    return 0;
    
}
