#include<stdio.h>
int main(){
    int n_1,n_2,i,j,temp;
    printf("Enter the first and last terms of the range respectively\n");
    scanf("%d%d",&n_1,&n_2);
    if(n_1<0&&n_2<0){
        printf("Negative numbers can not be PRIME NUMBERS");
        return 0;
    }
    if(n_1>n_2){
        temp=n_1;
        n_1=n_2;
        n_2=temp;
    }
    if(n_1<2){
        n_1=2;
    }
    for(i=n_1;i<=n_2;i++){
        int prime=0;
        for(j=1;j*j<=i;j++){
            if(i%j==0){
                prime++;
                if(i/j!=j){
                    prime++;
                }
            }
        }
        if(prime==2){
            printf("%d ",i);
        }
    }
    return 0;


}