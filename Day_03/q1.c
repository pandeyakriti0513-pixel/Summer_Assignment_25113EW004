#include<stdio.h>
int main(){
    int i,n,prime=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            prime++;
            if(n/i!=i){
                prime++;
            }
        }
    }
    if(prime==2){
        printf("%d is a PRIME NUMBER",n);
    }
    else{
        printf("%d is not a PRIME NUMBER",n);
    }
    return 0;
}