//Q.Write a program to find maximum occuring character
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int freq[256]={0};
    int i,max_freq=0;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    char max_c=str[0];
    for(i=0;str[i];i++){
        freq[(int)str[i]]++;
    }
    for(i=0;i<256;i++){
        if(freq[i]>max_freq){
            max_freq=freq[i];
            max_c=(char)i;
        }
    }
    printf("Maximum occuring character: %c (%d times)\n",max_c,max_freq);
    return 0;
}