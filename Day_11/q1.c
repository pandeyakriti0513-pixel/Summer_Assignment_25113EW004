//Q. Write a program to write a function to find sum of two numbers//
#include<stdio.h>
#include<math.h>
float sum(float a,float b){
    return a+b;
}
int main(){
    float num_1,num_2,result;
    printf("Enter the two numbers:\n");
    scanf("%f%f",&num_1,&num_2);
    result=sum(num_1,num_2);
    printf("The sum of %f and %f is equal to %f",num_1,num_2,result);
    return 0;
}