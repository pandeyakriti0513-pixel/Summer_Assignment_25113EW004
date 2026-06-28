//Q.Write a program to find common characters in strings
#include<stdio.h>
#include<string.h>
int main(){
    char s1[1000],s2[1000];
    int freq1[1000]={0},freq2[1000]={0};
    int i;
    printf("Enter the first string:\n");
    fgets(s1,sizeof(s1),stdin);
    s1[strcspn(s1,"\n")]='\0';
    printf("Enter the second string:\n");
    fgets(s2,sizeof(s2),stdin);
    s2[strcspn(s2,"\n")]='\0';
    for(i=0;s1[i];i++){
        freq1[(int)s1[i]]++;
    }
    for(i=0;s2[i];i++){
        freq2[(int)s2[i]]++;
    }
    printf("Common Characters:\n");
    for(i=0;i<256;i++){
        if(freq1[i] && freq2[i]){
            printf("%c ",i);
        }
    }
    return 0;
}