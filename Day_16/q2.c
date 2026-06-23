//Q.Write a program to find maximum frequency element
#include<stdio.h>
int main(){
    int i,n,max_freq;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    int arr[n];
    int hash_arr[1001]={0};
    printf("Enter the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash_arr[arr[i]]++;
    }
    max_freq=hash_arr[arr[0]];
    for(i=1;i<n;i++){
       if(max_freq<hash_arr[arr[i]]){
        max_freq=hash_arr[arr[i]];
       } 
    }
    printf("ELEMENT/S WITH MAXIMUM FREQUENCY IS/ARE:\n");
    
    for(i=0;i<n;i++){
        int already_printed=0;
        for(int j=0;j<i;j++){
            if(arr[j]==arr[i]){
                already_printed++;
            }
        }

        if(max_freq==hash_arr[arr[i]] && already_printed==0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}