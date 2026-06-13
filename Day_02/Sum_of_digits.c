#include<stdio.h>
int main(){
    int n,sum=0,r;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        sum+=r;
        n=n/10;
        }
        printf("The sum of all the digits of the given number is %d",sum);
        return 0;
}