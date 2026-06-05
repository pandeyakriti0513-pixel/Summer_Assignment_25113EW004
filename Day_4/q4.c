//Write a program to print armstrong numbers in a range//
#include<stdio.h>
#include<math.h>
int main(){
    int i,n_1,n_2, rem,temp,original_num,num;
    printf("Enter the first and last terms of the range\n");
    scanf("%d%d",&n_1,&n_2);
    if(n_1>n_2){
        temp=n_2;
        n_2=n_1;
        n_1=temp;   
    }
    if(n_1<0&&n_2<0){
        printf("No ARMSTRONG NUMBER can be found in this range");
        return 0;
    }
    for(i=n_1;i<=n_2;i++){
        num=i;
        int sum=0;
        int digits=0;
        original_num=num;
        while(num>0){
        digits++;
        num=num/10;
    }
    num=original_num;
    while(num>0){
        rem=num%10;
        sum=sum+round(pow(rem,digits));
        num=num/10;
    }
    if(original_num==sum){
        printf("%d ",i);
    }
    }
    return 0;

}