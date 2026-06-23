//Q. Write a program to find a pair with given sum
#include<stdio.h>
int main(){
    int n,i,j,num,a=1;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==num){
                printf("Pair %d->%d,%d\n",a,arr[i],arr[j]);
                a++;
            }
        }
    }
    return 0;
}