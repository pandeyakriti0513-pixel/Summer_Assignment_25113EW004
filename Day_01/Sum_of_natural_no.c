#include<stdio.h>
int main(){
    int i,sum=0,n;
    printf("Enter the number upto which the sum is to be calculated");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("The sum of all natural numbers upto %d is %d",n,sum);
    return 0;

}