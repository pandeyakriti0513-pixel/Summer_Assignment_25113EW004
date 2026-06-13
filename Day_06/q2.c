//Write a program to convert binary to decimal//
#include<stdio.h>
int main(){
    int num,rem,decimal=0,base=1;
    printf("Enter the binary number\n");
    scanf("%d",&num);
    int n=num;
    while(num>0){
        rem=num%10;
        decimal=decimal+rem*base;
        base*=2;
        num/=10;
    }
    printf("%d is written as %d in decimal notation",n,decimal);
    return 0;
}