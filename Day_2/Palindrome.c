#include<stdio.h>
int main(){
    int n,reverse=0,rem,real_num;
    printf("Enter the number");
    scanf("%d",&n);
    if(n<0){
        printf("NOT PALINDROME");
    }
    else{
        real_num=n;
        while(n!=0){
            rem=n%10;
            reverse=(reverse*10)+rem;
            n/=10;
        }
        if(real_num==reverse){
            printf("PALINDROME");
        }
        else{
            printf("NOT PALINDROME");
        }
    }
    return 0;
}