//Q.Write a program to create student record system using arrays and string
#include<stdio.h>
#include<string.h>
#define MAX 100
struct student
{
    int roll;
    char name[100];
    char branch[50];
    float cgpa;
};

struct student s[MAX];

int count = 0;

void addStudent()
{
    if(count >= MAX)
    {
        printf("\nDatabase Full!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d",&s[count].roll);
    getchar();

    printf("Enter Student Name: ");
    fgets(s[count].name,sizeof(s[count].name),stdin);
    s[count].name[strcspn(s[count].name,"\n")] = '\0';

    printf("Enter Branch: ");
    fgets(s[count].branch,sizeof(s[count].branch),stdin);
    s[count].branch[strcspn(s[count].branch,"\n")] = '\0';

    printf("Enter CGPA: ");
    scanf("%f",&s[count].cgpa);

    count++;

    printf("\nStudent Record Added Successfully.\n");
}

void displayStudents()
{
    int i;

    if(count==0)
    {
        printf("\nNo Student Records Available.\n");
        return;
    }

    printf("\n========== STUDENT RECORDS ==========\n");

    for(i=0;i<count;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Roll Number : %d\n",s[i].roll);
        printf("Name        : %s\n",s[i].name);
        printf("Branch      : %s\n",s[i].branch);
        printf("CGPA        : %.2f\n",s[i].cgpa);
    }
}

void searchStudent()
{
    int roll,i;
    int found=0;

    printf("\nEnter Roll Number: ");
    scanf("%d",&roll);

    for(i=0;i<count;i++)
    {
        if(s[i].roll==roll)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n",s[i].roll);
            printf("Name        : %s\n",s[i].name);
            printf("Branch      : %s\n",s[i].branch);
            printf("CGPA        : %.2f\n",s[i].cgpa);

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nStudent Not Found.\n");
}

void updateStudent()
{
    int roll,i;
    int found=0;

    printf("\nEnter Roll Number to Update: ");
    scanf("%d",&roll);

    for(i=0;i<count;i++)
    {
        if(s[i].roll==roll)
        {
            getchar();

            printf("Enter New Name: ");
            fgets(s[i].name,sizeof(s[i].name),stdin);
            s[i].name[strcspn(s[i].name,"\n")] = '\0';

            printf("Enter New Branch: ");
            fgets(s[i].branch,sizeof(s[i].branch),stdin);
            s[i].branch[strcspn(s[i].branch,"\n")] = '\0';

            printf("Enter New CGPA: ");
            scanf("%f",&s[i].cgpa);

            printf("\nRecord Updated Successfully.\n");

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nStudent Not Found.\n");
}

void deleteStudent()
{
    int roll,i,j;
    int found=0;

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d",&roll);

    for(i=0;i<count;i++)
    {
        if(s[i].roll==roll)
        {
            for(j=i;j<count-1;j++)
            {
                s[j]=s[j+1];
            }

            count--;

            printf("\nRecord Deleted Successfully.\n");

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nStudent Not Found.\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n======================================");
        printf("\n STUDENT RECORD SYSTEM");
        printf("\n======================================");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
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