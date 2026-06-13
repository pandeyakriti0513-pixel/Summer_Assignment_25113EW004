//Write a program to check perfect number//
#include<stdio.h>
int main(){
    int num,sum=1,i,original_num;
    printf("Enter the number\n");
    scanf("%d",&num);
    original_num=num;
    if(num<0){
        printf("Negative numbers can not be perfect numbers ");
        return 0;
    }
    if(num==1||num==0){
        printf("Not a PERFECT NUMBER");
        return 0;
    }
    for(i=2;i*i<=num;i++){
        if(num%i==0){
            sum+=i;
            if(num/i!=i && (num/i)!=original_num){
                sum+=num/i;
            }
        }
    }
    if(sum==original_num){
        printf("PERFECT NUMBER");
    }
    else{
        printf("Not a perfect number");
    }
    return 0;
}
