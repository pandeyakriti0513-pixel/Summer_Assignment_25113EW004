//Q.Write a program to check anagram string
#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000];
    char str2[1000];
    int freq[256]={0};
    int i=0;
    printf("Enter the first string:\n");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter the second string:\n");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    if(strlen(str1)!=strlen(str2)){
        printf("Not an anagram string\n");
        return 0;
    }
    for(i=0;str1[i];i++){
        freq[(int)str1[i]]++;
        freq[(int)str2[i]]--;
    }
    for(i=0;i<256;i++){
        if(freq[i]!=0){
            printf("Not an anagram string\n");
            return 0;
        }
    }
    printf("Anagram string\n");
    return 0;
}