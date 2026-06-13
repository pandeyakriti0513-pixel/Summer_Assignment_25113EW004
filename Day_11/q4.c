// Q. Write a program to write function to find factorial. //
#include<stdio.h>
int fac(int n){
    int i,product=1;
    if(n==0||n==1) return 1;
    for(i=2;i<=n;i++){
        product*=i;
    }
    return product;
}
int main(){
    int num,factorial;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num<0){
        printf("The factorial of negative integers can not be calculated.");
        return 0;
    }
    factorial=fac(num);
    printf("The factorial of %d is: %d",num,factorial);
    return 0;
}