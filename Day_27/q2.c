//Q.Write a program to create employee management system

#include<stdio.h>
#include<string.h>

#define MAX 100

struct employee
{
    int id;
    char name[100];
    char department[100];
    float salary;
};

struct employee emp[MAX];

int count = 0;

void addEmployee()
{
    if(count >= MAX)
    {
        printf("\nEmployee Database Full!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d",&emp[count].id);
    getchar();

    printf("Enter Employee Name: ");
    fgets(emp[count].name,sizeof(emp[count].name),stdin);
    emp[count].name[strcspn(emp[count].name,"\n")] = '\0';

    printf("Enter Department: ");
    fgets(emp[count].department,sizeof(emp[count].department),stdin);
    emp[count].department[strcspn(emp[count].department,"\n")] = '\0';

    printf("Enter Salary: ");
    scanf("%f",&emp[count].salary);

    count++;

    printf("\nEmployee Added Successfully.\n");
}

void displayEmployees()
{
    int i;

    if(count==0)
    {
        printf("\nNo Employee Records Found.\n");
        return;
    }

    printf("\n========== EMPLOYEE RECORDS ==========\n");

    for(i=0;i<count;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("Employee ID : %d\n",emp[i].id);
        printf("Name        : %s\n",emp[i].name);
        printf("Department  : %s\n",emp[i].department);
        printf("Salary      : %.2f\n",emp[i].salary);
    }
}

void searchEmployee()
{
    int id, found=0, i;

    printf("\nEnter Employee ID: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(emp[i].id==id)
        {
            printf("\nEmployee Found\n");
            printf("Employee ID : %d\n",emp[i].id);
            printf("Name        : %s\n",emp[i].name);
            printf("Department  : %s\n",emp[i].department);
            printf("Salary      : %.2f\n",emp[i].salary);

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nEmployee Not Found.\n");
}

void updateEmployee()
{
    int id, found=0, i;

    printf("\nEnter Employee ID to Update: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(emp[i].id==id)
        {
            getchar();

            printf("Enter New Name: ");
            fgets(emp[i].name,sizeof(emp[i].name),stdin);
            emp[i].name[strcspn(emp[i].name,"\n")] = '\0';

            printf("Enter New Department: ");
            fgets(emp[i].department,sizeof(emp[i].department),stdin);
            emp[i].department[strcspn(emp[i].department,"\n")] = '\0';

            printf("Enter New Salary: ");
            scanf("%f",&emp[i].salary);

            printf("\nEmployee Record Updated Successfully.\n");

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nEmployee Not Found.\n");
}

void deleteEmployee()
{
    int id, found=0, i, j;

    printf("\nEnter Employee ID to Delete: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(emp[i].id==id)
        {
            for(j=i;j<count-1;j++)
            {
                emp[j]=emp[j+1];
            }

            count--;

            printf("\nEmployee Record Deleted Successfully.\n");

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nEmployee Not Found.\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n======================================");
        printf("\n EMPLOYEE MANAGEMENT SYSTEM");
        printf("\n======================================");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Employee");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                deleteEmployee();
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