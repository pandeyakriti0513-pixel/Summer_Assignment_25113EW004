//Q. Write a program to recursive reverse number//
#include<stdio.h>
void reverse(int n,int rev){
    int rem;
    if(n==0){
        printf("The reverse of the given number is: %d",rev);
        return;
    }
    rem=n%10;
    reverse(n/10,((rev*10)+rem));
    return;
}
int main(){
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    reverse(num,0);
    return 0;
}