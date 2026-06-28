//Q. Write a program to binary search
#include<stdio.h>
int Binary_search(int arr[],int size,int key){
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int num,i,que;
    printf("Enter the number of elements present in the array:\n");
    scanf("%d",&num);
    printf("Enter the elements:\n");
    int arr[num];
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number which is to be searched:\n");
    scanf("%d",&que);
    int result=Binary_search(arr,num,que);
    if(result!=-1){
        printf("Element found at index %d\n",result);
    }
    else{
        printf("Element not found");
    }
    return 0;
}