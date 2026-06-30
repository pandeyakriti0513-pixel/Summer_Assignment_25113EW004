//Q.Write a program to create mini library system
#include<stdio.h>
#include<string.h>
#define MAX 100
struct book
{
    int id;
    char title[100];
    char author[100];
    int year;
    int available;
};

struct book library[MAX];

int count = 0;
int nextID = 1;

void addBook()
{
    if(count >= MAX)
    {
        printf("\nLibrary is Full!\n");
        return;
    }

    library[count].id = nextID++;

    getchar();

    printf("\nEnter Book Title: ");
    fgets(library[count].title,sizeof(library[count].title),stdin);
    library[count].title[strcspn(library[count].title,"\n")] = '\0';

    printf("Enter Author Name: ");
    fgets(library[count].author,sizeof(library[count].author),stdin);
    library[count].author[strcspn(library[count].author,"\n")] = '\0';

    printf("Enter Publication Year: ");
    scanf("%d",&library[count].year);

    library[count].available = 1;

    count++;

    printf("\nBook Added Successfully.\n");
}

void displayBooks()
{
    int i;

    if(count==0)
    {
        printf("\nNo Books Available.\n");
        return;
    }

    printf("\n============== LIBRARY BOOKS ==============\n");

    for(i=0;i<count;i++)
    {
        printf("\nBook %d\n",i+1);
        printf("Book ID : %d\n",library[i].id);
        printf("Title   : %s\n",library[i].title);
        printf("Author  : %s\n",library[i].author);
        printf("Year    : %d\n",library[i].year);

        if(library[i].available)
            printf("Status  : Available\n");
        else
            printf("Status  : Issued\n");
    }
}

void searchBook()
{
    int id,i,found=0;

    printf("\nEnter Book ID: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(library[i].id==id)
        {
            printf("\nBook Found\n");
            printf("Book ID : %d\n",library[i].id);
            printf("Title   : %s\n",library[i].title);
            printf("Author  : %s\n",library[i].author);
            printf("Year    : %d\n",library[i].year);

            if(library[i].available)
                printf("Status  : Available\n");
            else
                printf("Status  : Issued\n");

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nBook Not Found.\n");
}

void issueBook()
{
    int id,i,found=0;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(library[i].id==id)
        {
            found=1;

            if(library[i].available)
            {
                library[i].available=0;
                printf("\nBook Issued Successfully.\n");
            }
            else
            {
                printf("\nBook Already Issued.\n");
            }

            break;
        }
    }

    if(!found)
        printf("\nBook Not Found.\n");
}

void returnBook()
{
    int id,i,found=0;

    printf("\nEnter Book ID to Return: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(library[i].id==id)
        {
            found=1;

            if(library[i].available)
            {
                printf("\nBook is Already Available.\n");
            }
            else
            {
                library[i].available=1;
                printf("\nBook Returned Successfully.\n");
            }

            break;
        }
    }

    if(!found)
        printf("\nBook Not Found.\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n=====================================");
        printf("\n       MINI LIBRARY SYSTEM");
        printf("\n=====================================");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                printf("\nThank You!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}