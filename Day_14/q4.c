//Q. Write a program to find duplicates in array
#include<stdio.h>
#include<stdbool.h>
bool duplicates(int j,int ar[],int s){
    int i;
    for(i=j+1;i<s;i++){
        if(ar[j]==ar[i]) {
            return true;
        }}
        return false;
    
}
int main(){
    int i,n;
    bool dupe;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        dupe=duplicates(i,arr,n);
        int occured_before=0;
        for(int j=0;j<i;j++){
            if(arr[j]==arr[i]){
                occured_before=1;
                break;
            }
        }
        if(dupe==true && occured_before==0){
           printf("DUPLICATE ELEMENT:%d\n",arr[i]); 
        };
    }
    return 0;
}