//Q. Write a program to union of arrays
#include<stdio.h>
int main(){
    int n1,n2,n3,i,j,k;
    printf("Enter the number of elements present in first array:\n");
    scanf("%d",&n1);
    printf("Enter the number of elements present in the second array:\n");
    scanf("%d",&n2);
    n3=n1+n2;
    int arr[n3];
    printf("Enter the array:\n");
    for(i=0;i<n1;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the second array:\n");
    for(i=n1;i<n3;i++){
        scanf("%d",&arr[i]);
    }
    //removing the duplicates
    for(i=0;i<n3;i++){
        for(j=n3-1;j>i;j++){
            if(arr[i]==arr[j]){
                for(k=j+1;k<n3;k++){
                    arr[k-1]=arr[k];
                }
                n3--;
            }
        }
    }
    //printing the union of array
    printf("The union of array is given by:\n");
    for(i=0;i<n3;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}