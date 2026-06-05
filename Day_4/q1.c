//Write a program to generate a fibonacci series//
#include<stdio.h>
int main(){
    int i,num;
    printf("Enter the number of terms up to which the fibonacci series is to be printed\n");
    scanf("%d",&num);
    if(num<=0){
        printf("Invalid input, try again with a positive number");
        return 0;
    }
    int arr[num];
    for(i=0;i<=num-1;i++){
        if(i==0){
            arr[i]=0;
            printf("%d ",arr[i]);
        }
        else if(i==1){
            arr[i]=1;
            printf("%d ",arr[i]);
        
        }
        else if(i>=2){
            arr[i]=(arr[i-1]+arr[i-2]);
            printf("%d ",arr[i]);
        }

    }
    return 0;
}