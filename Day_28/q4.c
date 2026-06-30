//Q.Write a program to create contact management system
#include<stdio.h>
#include<string.h>

#define MAX 100

struct contact
{
    int id;
    char name[100];
    char phone[20];
    char email[100];
};

struct contact c[MAX];

int count = 0;
int nextID = 1;

void addContact()
{
    if(count >= MAX)
    {
        printf("\nContact List Full!\n");
        return;
    }

    c[count].id = nextID++;

    getchar();

    printf("\nEnter Name: ");
    fgets(c[count].name,sizeof(c[count].name),stdin);
    c[count].name[strcspn(c[count].name,"\n")] = '\0';

    printf("Enter Phone Number: ");
    fgets(c[count].phone,sizeof(c[count].phone),stdin);
    c[count].phone[strcspn(c[count].phone,"\n")] = '\0';

    printf("Enter Email Address: ");
    fgets(c[count].email,sizeof(c[count].email),stdin);
    c[count].email[strcspn(c[count].email,"\n")] = '\0';

    count++;

    printf("\nContact Added Successfully.\n");
}

void displayContacts()
{
    int i;

    if(count==0)
    {
        printf("\nNo Contacts Available.\n");
        return;
    }

    printf("\n========== CONTACT LIST ==========\n");

    for(i=0;i<count;i++)
    {
        printf("\nContact %d\n",i+1);
        printf("ID    : %d\n",c[i].id);
        printf("Name  : %s\n",c[i].name);
        printf("Phone : %s\n",c[i].phone);
        printf("Email : %s\n",c[i].email);
    }
}

void searchContact()
{
    int id;
    int i, found = 0;

    printf("\nEnter Contact ID: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(c[i].id == id)
        {
            printf("\nContact Found\n");
            printf("ID    : %d\n",c[i].id);
            printf("Name  : %s\n",c[i].name);
            printf("Phone : %s\n",c[i].phone);
            printf("Email : %s\n",c[i].email);

            found = 1;
            break;
        }
    }

    if(!found)
        printf("\nContact Not Found.\n");
}

void updateContact()
{
    int id;
    int i, found = 0;

    printf("\nEnter Contact ID to Update: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(c[i].id == id)
        {
            getchar();

            printf("Enter New Name: ");
            fgets(c[i].name,sizeof(c[i].name),stdin);
            c[i].name[strcspn(c[i].name,"\n")] = '\0';

            printf("Enter New Phone Number: ");
            fgets(c[i].phone,sizeof(c[i].phone),stdin);
            c[i].phone[strcspn(c[i].phone,"\n")] = '\0';

            printf("Enter New Email Address: ");
            fgets(c[i].email,sizeof(c[i].email),stdin);
            c[i].email[strcspn(c[i].email,"\n")] = '\0';

            printf("\nContact Updated Successfully.\n");

            found = 1;
            break;
        }
    }

    if(!found)
        printf("\nContact Not Found.\n");
}

void deleteContact()
{
    int id;
    int i, j;
    int found = 0;

    printf("\nEnter Contact ID to Delete: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(c[i].id == id)
        {
            for(j=i;j<count-1;j++)
            {
                c[j] = c[j+1];
            }

            count--;

            printf("\nContact Deleted Successfully.\n");

            found = 1;
            break;
        }
    }

    if(!found)
        printf("\nContact Not Found.\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n====================================");
        printf("\n    CONTACT MANAGEMENT SYSTEM");
        printf("\n====================================");
        printf("\n1. Add Contact");
        printf("\n2. Display Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Update Contact");
        printf("\n5. Delete Contact");
        printf("\n6. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                updateContact();
                break;

            case 5:
                deleteContact();
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