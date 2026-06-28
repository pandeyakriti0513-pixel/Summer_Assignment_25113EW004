//Q.Write a program to compress a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int i=0;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    printf("Compressed string:\n");
    while(str[i]){
        char cur=str[i];
        int count=0;
        while(str[i]==cur){
            count++;
            i++;
        }
        printf("%c%d",cur,count);
    }
    printf("\n");
    return 0;
}