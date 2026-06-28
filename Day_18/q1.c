//Q. Write a program to bubble sort
#include<stdio.h>
void Bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int num,i;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the array elements:\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array:\n");
    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    Bubble_sort(arr,num);
    printf("\nSorted Array:\n");
    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}