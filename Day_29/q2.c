//Q.Write a program to create menu driven array operations
#include<stdio.h>
#define MAX 100
int arr[MAX];
int n = 0;

void inputArray()
{
    int i;

    printf("\nEnter Number of Elements: ");
    scanf("%d",&n);

    printf("Enter %d Elements:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nArray Inserted Successfully.\n");
}

void displayArray()
{
    int i;

    if(n==0)
    {
        printf("\nArray is Empty.\n");
        return;
    }

    printf("\nArray Elements:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
}

void largestElement()
{
    int i,max;

    if(n==0)
    {
        printf("\nArray is Empty.\n");
        return;
    }

    max=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

    printf("\nLargest Element = %d\n",max);
}

void smallestElement()
{
    int i,min;

    if(n==0)
    {
        printf("\nArray is Empty.\n");
        return;
    }

    min=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    printf("\nSmallest Element = %d\n",min);
}

void sumArray()
{
    int i,sum=0;

    if(n==0)
    {
        printf("\nArray is Empty.\n");
        return;
    }

    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    printf("\nSum = %d\n",sum);
}

void averageArray()
{
    int i,sum=0;
    float avg;

    if(n==0)
    {
        printf("\nArray is Empty.\n");
        return;
    }

    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    avg=(float)sum/n;

    printf("\nAverage = %.2f\n",avg);
}

void searchElement()
{
    int key,i,found=0;

    if(n==0)
    {
        printf("\nArray is Empty.\n");
        return;
    }

    printf("\nEnter Element to Search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("\nElement Found at Position %d\n",i+1);
            found=1;
            break;
        }
    }

    if(!found)
        printf("\nElement Not Found.\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n======================================");
        printf("\n MENU DRIVEN ARRAY OPERATIONS SYSTEM");
        printf("\n======================================");
        printf("\n1. Insert Array");
        printf("\n2. Display Array");
        printf("\n3. Largest Element");
        printf("\n4. Smallest Element");
        printf("\n5. Sum of Elements");
        printf("\n6. Average");
        printf("\n7. Search Element");
        printf("\n8. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                inputArray();
                break;

            case 2:
                displayArray();
                break;

            case 3:
                largestElement();
                break;

            case 4:
                smallestElement();
                break;

            case 5:
                sumArray();
                break;

            case 6:
                averageArray();
                break;

            case 7:
                searchElement();
                break;

            case 8:
                printf("\nThank You!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}