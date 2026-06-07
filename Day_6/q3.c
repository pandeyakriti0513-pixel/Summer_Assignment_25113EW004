//Write a program to count set bits in a number//
#include<stdio.h>
int main(){
    int num,rem,set_bits=0;
    printf("Enter an integer\n");
    scanf("%d",&num);
    int n=num;
    while(num>0){
        rem=num%2;
        if(rem==1){
            set_bits++;
        }
        num/=2;
    }
    printf("The number of set bits in %d is: %d",n,set_bits);
    return 0;

}