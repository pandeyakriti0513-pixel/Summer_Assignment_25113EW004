//Write a program to print factors of a number//
#include<stdio.h>
int main(){
    int i,num;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=1;i*i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
            if(num/i!=i){
                printf("%d ",num/i);
            }
        }
    }
    return 0;
}