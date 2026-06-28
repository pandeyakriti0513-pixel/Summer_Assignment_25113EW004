//Q.Write a program to find first repeating character
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int freq[256]={0};
    int i;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i];i++){
        freq[(int)str[i]]++;
    }
    for(i=0;str[i];i++){
        if(freq[(int)str[i]]>1){
            printf("First repeating character: %c\n ",str[i]);
            return 0;
        }
    }
    printf("No repeating character\n");
    return 0;
}