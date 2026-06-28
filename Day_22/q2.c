//Q.Write a program to count words in a sentence
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int count=0,in_word=0,i;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i];i++){
        if(str[i]!=' '&& !in_word){
            count++;
            in_word=1;
        }
        else if(str[i]==' '){
            in_word=0;
        }
    }
    printf("Word count->%d\n",count);
    return 0;
}