//Q.Write a program to merge two sorted arrays
#include<stdio.h>
int main(){
    int n1,n2,i=0,j=0,k=0;
    printf("Enter the number of elements in first array:\n");
    scanf("%d",&n1);
    printf("Enter the number of elements present in second array:\n");
    scanf("%d",&n2);
    int a1[n1],a2[n2],merged[n1+n2];
    printf("Enter the first array:\n");
    for(int x=0;x<n1;x++){
        scanf("%d",&a1[x]);
    }
    printf("Enter the second array:\n");
    for(int x=0;x<n2;x++){
        scanf("%d",&a2[x]);
    }
    while(i<n1 && j<n2){
        merged[k++]=(a1[i]<=a2[j])?a1[i++]:a2[j++];
    }
    while(i<n1){
        merged[k++]=a1[i++];
    }
    while(j<n2){
        merged[k++]=a2[j++];
    }
    printf("FINAL ARRAY:\n");
    for(int x=0;x<k;x++){
        printf("%d ",merged[x]);
    }
    return 0;

}