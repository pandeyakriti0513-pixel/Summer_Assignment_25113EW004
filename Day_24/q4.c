//Q.Write a program to remove duplicate characters
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000],result[1000];
    int seen[256]={0};
    int i,k=0;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i];i++){
        if(!seen[(int)str[i]]){
            seen[(int)str[i]]=1;
            result[k++]=str[i];
        }
    }
    result[k]='\0';
    printf("After removing duplicates %s\n",result);
    return 0;
}