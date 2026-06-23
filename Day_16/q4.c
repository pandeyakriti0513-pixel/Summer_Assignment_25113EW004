//Q. Write a program to remove duplicates from array
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Removing duplicates
    for(i=0;i<n;i++){
            for(j=n-1;j>=i+1;j--){
                if(arr[i]==arr[j]){
                    for(k=j+1;k<n;k++){
                        arr[k-1]=arr[k];
                    }
                    n--;
                }
            }
        
    }
    //Printing new array
    printf("Array after removing the duplicates:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}