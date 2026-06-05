//Q. Write a program to find nth fibonacci term//
#include<stdio.h>
int main(){
    int i, num;
    printf("Enter the term whose value is to be found\n");
    scanf("%d",&num);
    if(num<=0){
        printf("Invalid input, try again with a positive number");
        return 0;
    }
    int arr[num];
    for(i=0;i<=num-1;i++){
        if(i==0){
            arr[i]=0;
        }
        else if(i==1){
            arr[i]=1;
        }
        else if(i>=2){
            arr[i]=(arr[i-1]+arr[i-2]);
        }
    }
    printf("The value of the term at the given input is : %d",arr[num-1]);
    return 0;
}
