//Q. Write a program to write function for fibonacci.//
#include<stdio.h>
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n,i;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}