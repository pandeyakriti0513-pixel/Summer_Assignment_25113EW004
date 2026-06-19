//Q.Write a program to Linear search
#include<stdio.h>
int main(){
    int i,n,a=0,num;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element for search:\n");
    scanf("%d",&num);
    while(arr[a]!=num){
        a++;
        if(a==n){
            printf("Element not present in the array");
            return 0;
        }
    }
    printf("%d is found at index %d",num,a);
    return 0;
}