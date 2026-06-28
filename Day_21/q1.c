//Q.Write a program to find string length without using strlen()
#include<stdio.h>
int main(){
    char str[100];
    int length=0;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    while(str[length]!='\0' && str[length]!='\n'){
        length++;
    }
    printf("Length of the string = %d\n",length);
    return 0;
}
