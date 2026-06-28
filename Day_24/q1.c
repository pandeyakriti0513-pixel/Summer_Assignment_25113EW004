//Q.Write a program to check string rotation
#include<stdio.h>
#include<string.h>
int main(){
    char s1[1000],s2[1000],temp[1000];
    printf("Enter the first string:\n");
    fgets(s1,sizeof(s1),stdin);
    s1[strcspn(s1,"\n")]='\0';
    printf("Enter the second string:\n");
    fgets(s2,sizeof(s2),stdin);
    s2[strcspn(s2,"\n")]='\0';
    int n=strlen(s1);
    if(strlen(s2)!=n){
        printf("No rotation\n");
        return 0;
    }
    strcpy(temp,s1);
    strcat(temp,s1);
    printf(strstr(temp,s2)? "Rotation\n" : "No rotation\n");
    return 0;

}