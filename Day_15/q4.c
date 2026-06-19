//Q.Write a program to move zeroes to the end 
#include<stdio.h>
#include<stdbool.h>
bool already_sorted(int j,int ar[],int size){
    if(j>size-1) return true;
    if(ar[j]==0) return already_sorted(j+1,ar,size);
    return false;
}
int main(){
    int i,n,temp,j;
    printf("Enter the number of elements present in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=n-1;
    for(i=0;i<n;i++){
        int result=already_sorted(i,arr,n);
        if(arr[i]==0 && result==false){
            while(a>=0 && arr[a]==0){
                a--;
            }
            temp=arr[a];
            arr[a]=arr[i];
            arr[i]=temp;
            
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}