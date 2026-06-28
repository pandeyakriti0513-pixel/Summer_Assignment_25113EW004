//Q.Write a program to check palindrome string
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int palindrome=1,i;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int n=strlen(str);
    for(i=0;i<n/2;i++){
        if(str[i]!=str[n-1-i]){
            palindrome=0;
            break;
        }
    }
    printf(palindrome? "Palindrome\n" : "Not a palindrome\n");
    return 0;
}