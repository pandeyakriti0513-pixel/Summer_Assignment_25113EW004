//Q. Write a program to write function for palindrome.//
#include<stdio.h>
#include<stdbool.h>
bool palindrome(int left,int right,char str[]){
    if(left>=right){
        return true;
    }
    if(str[left]==str[right]){
        return palindrome(left+1,right-1,str);
    }
    return false;
}
int main(){
    int n,result;
    printf("Enter the number of elements in string:\n");
    scanf("%d",&n);
    char arr[n+1];
    printf("Enter the string:\n");
    scanf("%s",arr);
    result=palindrome(0,n-1,arr);
    if(result==true) printf("PALINDROME");
    else printf("Not a PALINDROME");
    return 0;
}