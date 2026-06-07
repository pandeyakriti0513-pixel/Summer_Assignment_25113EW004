//Write a program to convert decimal to binary//
#include<stdio.h>
int main(){
    int n, binary=0,place=1,rem,num;
    printf("Enter the number");
    scanf("%d",&n);
    num=n;
    while(n>0){
        rem=n%2;
        binary=rem*place;
        place*=10;
        n/=2;
    }
    printf("%d is written as %d in binary notation",num,binary);
    return 0;

}