//Write a program to check armstrong number//
//armstrong number: a number that is equal to the sum of it's digits raised to the power of the number of digits//
#include<stdio.h>
#include<math.h>
int main(){
    int num ,digits=0,rem,original_num,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    original_num=num;
    while(num>0){
        digits++;
        num=num/10;
    }
    num=original_num;
    while(num>0){
        rem=num%10;
        sum=sum+round(pow(rem,digits));
        num=num/10;
    }
    if(original_num==sum){
        printf("ARMSTRONG NUMBER");
    }
    else{
        printf("Not an ARMSTRONG NUMBER");
    }
    return 0;
    
}