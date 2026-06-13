//Q. Write a program to recursive sum of digits//
#include<stdio.h>
#include<stdlib.h>
void sum_of_digits(int n,int sum){
    int rem;
    if(n==0){
        printf("The sum of the digits is equal to: %d",sum);
        return;
    }
    rem=n%10;
    sum_of_digits(n/10,sum+rem);
    return;
}
int main(){
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    num=abs(num);
    sum_of_digits(num,0);
    return 0;
}

//Parameterised recursion is used in this problem//