//Q. Write a program to recursive factorial//
#include<stdio.h>
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int num,fac;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num<0){
        printf("Factorial calculation is not possible for negative integers\n");
        return 0;
    }
    fac=factorial(num);
    printf("The factorial of %d is equal to :%d",num,fac);
    return 0;
}

//Functional recursion is used to solve this problem//