//Q. Write a program to write function for armstrong number.//
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool armstrong(int n){
    int digits=0,original_num,rem,armstrong=0;
    original_num=n;
    while(n>0){
        digits++;
        n/=10;
    }
    n=original_num;
    while(n>0){
        rem=n%10;
        armstrong+=pow(rem,digits);
        n/=10;
    }
    if(original_num==armstrong) return true;
    return false;
}
int main(){
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    bool result=armstrong(num);
    if(result==true) printf("ARMSTORNG NUMBER");
    else printf("Not an ARMSTRONG NUMBER");
    return 0;
}