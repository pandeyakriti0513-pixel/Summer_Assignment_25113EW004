//Write a program to find largest prime factor//
#include<stdio.h>
int main(){
    int num,i,j,prime_factor=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num<2){
        if(num<0){
            printf("Negative numbers can not have prime factors");
            return 0;
        }
        printf("%d has no prime factors",num);
        return 0;
    }
    for(i=2;i<=num;i++){
        if(num%i==0){
            int prime=0;
            for(j=1;j*j<=i;j++){
                if(i%j==0){
                    prime++;
                    if(i/j!=j){
                        prime++;
                    }
                }}
                if(prime==2){
                    if(i>prime_factor){
                        prime_factor=i;
                    }
                }
            }}
            printf("The largest prime factors of %d is: %d",num,prime_factor);
            return 0;


}
