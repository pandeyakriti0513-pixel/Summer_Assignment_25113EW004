//Q.Write a program to remove spaces from string
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int k=0,i;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i];i++){
        if(str[i]!=' '){
            str[k++]=str[i];
        }
    }
    str[k]='\0';
    printf("String after removing the spaces:\n%s",str);
    return 0;
}