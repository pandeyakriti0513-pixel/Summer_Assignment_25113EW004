//Q.Write a program to find the longest word
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    char longest[1000]="",cur[1000]="";
    int i=0,k=0;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i];i++){
        if(str[i]!=' '){
            cur[k++]=str[i];
        }
        else{
            cur[k]='\0';
            if(strlen(cur)>strlen(longest)){
                strcpy(longest,cur);
            }
            k=0;
        }
    }
    cur[k]='\0';
    if(strlen(cur)>strlen(longest)){
        strcpy(longest,cur);
    }
    printf("Longest word: %s\n",longest);
    return 0;
}
