//Write a program to find x^n without pow()//
#include<stdio.h>
int main(){
    int num,pow,i,result=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    int n=num;
    printf("Enter the power\n");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++){
        result*=num;
    }
    printf("%d raised to the power of %d is eqaul to %d",n,pow,result);
    return 0;
}