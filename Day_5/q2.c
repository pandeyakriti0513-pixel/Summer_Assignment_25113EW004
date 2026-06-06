//Write a program to check strong number//
//Strong number: A number which is equal to the sum of factorial of it's own digits//
#include<stdio.h>
int main(){
    int i, num,digit,original_num,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    original_num=num;
    if(num<0){
        printf("Negative numbers can not be STRONG NUMBERS");
        return 0;
    }
    while(num>0){
        int factorial=1;
        digit=num%10;
        for(i=1;i<=digit;i++){
            factorial*=i;
        }
        sum+=factorial;
        num/=10;
    }
    if(sum==original_num){
        printf("STRONG NUMBER");
    }
    else{
        printf("Not a STRONG NUMBER");
    }
    return 0;
}