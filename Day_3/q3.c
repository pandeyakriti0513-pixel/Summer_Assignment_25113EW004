#include<stdio.h>
int main(){
    int n_1,n_2,temp,a,b;
    printf("Enter the two numbers\n");
    scanf("%d%d",&n_1,&n_2);
    a=n_1;
    b=n_2;
    while(n_2!=0){
        temp=n_2;
        n_2=n_1%n_2;
        n_1=temp;
    }
    printf("The GCD of %d and %d is : %d",a,b,n_1);
    return 0;
}