//Q. Write a program to selection sort
#include<stdio.h>
void Selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }
}
int main(){
    int num,i;
    printf("Enter the number of elements present in the array:\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the array elements:\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array:\n");
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    Selection_sort(arr,num);
    printf("\nSorted Array:\n");
    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}