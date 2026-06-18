//Q. Write a program to count even and odd elements//
#include<stdio.h>
int main(){
    int n,i,even=0,odd=0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0) even++;
        if(arr[i]%2!=0) odd++;
    }
    printf("The number of even elements is equal to: %d\nThe number of odd "
        "elements is equal to: %d",even,odd);
    
    
    return 0;
}