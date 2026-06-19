//Q. Write a program to frequency of an element
#include<stdio.h>
int main(){
    int i,n,num,frequency=0;
    printf("Enter the number of elements present in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number whose frequency is to be found:\n");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num) frequency++;
    }
    printf("%d occurs %d times in the array",num,frequency);
    return 0;
}