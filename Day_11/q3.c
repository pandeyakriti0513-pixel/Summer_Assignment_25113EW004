//Q. Write a program to write function to check prime.//
#include<stdio.h>
#include<stdbool.h>
bool prime(int n){
    int i,prime=0;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            prime++;
            if(n/i!=i){
                prime++;
            }
        }
    }
    if(prime==2){
        return true;
    }
    return false;
}
int main(){
    int num,result;
    printf("Enter the number:\n");
    scanf("%d",&num);
    result=prime(num);
    if(result==true) printf("PRIME NUMBER");
    else printf("Not a PRIME NUMBER");
    return 0;
}