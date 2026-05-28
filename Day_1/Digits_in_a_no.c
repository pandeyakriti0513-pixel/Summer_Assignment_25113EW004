#include<stdio.h>
int main(){
    int n,digits=0;
    printf("Enter the number");
    scanf("%d",n);
    while(n%10!=0){
        digits++;
        n=n/10;
    }
    printf("The number of digits is equal to %d",digits);
    return 0;

}