#include<stdio.h>
int main(){
    int n,r,product=1;
    printf("Enter the number:\n");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        product*=r;
        n=n/10;
    }
    printf("The product of all the digits is %d",product);
    return 0;
}