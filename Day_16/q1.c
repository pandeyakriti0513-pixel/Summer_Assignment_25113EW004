//Q. Write a program to find missing number in an array
#include<stdio.h>
int main(){
    int N, n,i,xor1=0,xor2=0,missing_num;
    printf("Enter N (numbers should occur between 1 to N):\n");
    scanf("%d",&N);
    n=N-1;
    int arr[n];
    printf("Enter the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        xor1^=arr[i];
    }
    for(i=1;i<=N;i++){
        xor2^=i;
    }
    missing_num=xor1^xor2;
    printf("MISSING NUMBER: %d",missing_num);
    return 0;
}
