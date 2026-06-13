//Q. Write a program to write function for perfect number.//
#include<stdio.h>
#include<stdbool.h>
bool perfect_num(int num){
    int i,sum=0,original_num;
    original_num=num;
    for(i=1;i*i<=num;i++){
        if(num%i==0){
            sum+=i;
            if(num/i!=i&&num/i!=num){
                sum+=num/i;
            }
        }
    }
    if(sum==original_num) return true;
    return false;
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    bool result=perfect_num(n);
    if(result==true) printf("PERFECT NUMBER");
    else printf("NOT A PERFECT NUMBER");
    return 0;
}