#include<stdio.h>
#include<stdlib.h>
int main(){
    int n_1,n_2,temp,a,b,lcm;
    printf("Enter the two numbers\n");
    scanf("%d%d",&n_1,&n_2);
    n_1=abs(n_1);
    n_2=abs(n_2);
    if(n_1==0||n_2==0){
        printf("The lowest common multiple is 0");
        return 0;
    }
    a=n_1;
    b=n_2;
    while(n_2!=0){
        temp=n_2;
        n_2=n_1%temp;
        n_1=temp;
    }
    lcm=(a*b)/n_1;
    printf("The lowest common multiple of %d and %d is: %d",a,b,lcm);
    return 0;
}