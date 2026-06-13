//Q. Write a program to recursive fibonacci//
#include<stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int num,i;
    printf("Enter the number of terms:\n");
    scanf("%d",&num);
    printf("The first %d terms of fibonacci series are:\n",num);
    for(i=0;i<=num-1;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}

//Functional recursion is used to solve this problem//