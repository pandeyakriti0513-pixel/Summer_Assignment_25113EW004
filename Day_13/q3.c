//Q.Write a program to find the largest and the smallest element
#include<stdio.h>
int main(){
    int i,n;
    float smallest,largest;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    float arr[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    smallest=arr[0];
    largest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<=smallest) smallest=arr[i];
        if(arr[i]>=largest)  largest=arr[i];
    }
    printf("SMALLEST ELEMENT: %.3f\nLARGEST ELEMENT: %.3f",smallest,largest);
    return 0;
}