//Q.Write a program to reverse array
#include<stdio.h>
void reverse_array(int l,int arr[],int size){
    int temp;
    if(l>=size/2){
        return; 
    }
    temp=arr[l];
    arr[l]=arr[size-l-1];
    arr[size-l-1]=temp;
    reverse_array(l+1,arr,size);
    return;
}
int main(){
    int i,n;
    printf("Enter the umber of elements in the array:\n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    reverse_array(0,ar,n);
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}