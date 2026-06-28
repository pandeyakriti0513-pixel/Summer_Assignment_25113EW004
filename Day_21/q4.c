//Q.Write a program to convert lowercase to uppercase
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i];i++){
        if(str[i]>='a'&& str[i]<='z'){
            str[i]-=32;
        }
    }
    printf("String(Uppercase):\n%s",str);
    return 0;
}