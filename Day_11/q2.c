//Q. Write a program to write function to find maximum. //
#include<stdio.h>
float maximum(float a , float b, float c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else return c;
    }
}
int main(){
    float n1,n2,n3,result;
    printf("Enter the numbers:\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    result=maximum(n1,n2,n3);
    printf("The maximum value among the three numbers is %f",result);
    return 0;
}