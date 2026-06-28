//Q.Write a program to count vowels and consonants
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100];
    int vowels=0,consonants=0,i;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i];i++){
        char c=tolower(str[i]);
        if(c>='a' && c<='z'){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }
    printf("Vowels->%d\nConsonants->%d",vowels,consonants);
    return 0;
}