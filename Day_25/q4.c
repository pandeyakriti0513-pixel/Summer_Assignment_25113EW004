//Q.Write a program to sort words by length
#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j;
    printf("Enter the number of words:\n");
    scanf("%d",&n);
    getchar();
    char words[n][100],temp[100];
    for(i=0;i<n;i++){
        fgets(words[i],sizeof(words[i]),stdin);
        words[i][strcspn(words[i],"\n")]='\0';
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strlen(words[j])>strlen(words[j+1])){
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }
    printf("Words sorted by length:\n");
    for(i=0;i<n;i++){
        printf("%s\n",words[i]);
    }
    return 0;
}