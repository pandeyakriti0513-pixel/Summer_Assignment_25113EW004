//Q.Write a program to create salary management system
#include<stdio.h>
#include<string.h>

#define MAX 100

struct employee
{
    int id;
    char name[100];
    float basic;
    float hra;
    float da;
    float pf;
    float netSalary;
};

struct employee emp[MAX];

int count = 0;

void calculateSalary(int index)
{
    emp[index].hra = emp[index].basic * 0.20;
    emp[index].da = emp[index].basic * 0.10;
    emp[index].pf = emp[index].basic * 0.12;

    emp[index].netSalary =
        emp[index].basic +
        emp[index].hra +
        emp[index].da -
        emp[index].pf;
}

void addEmployee()
{
    if(count >= MAX)
    {
        printf("\nDatabase Full!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d",&emp[count].id);
    getchar();

    printf("Enter Employee Name: ");
    fgets(emp[count].name,sizeof(emp[count].name),stdin);
    emp[count].name[strcspn(emp[count].name,"\n")] = '\0';

    printf("Enter Basic Salary: ");
    scanf("%f",&emp[count].basic);

    calculateSalary(count);

    count++;

    printf("\nEmployee Added Successfully.\n");
}

void displayEmployees()
{
    int i;

    if(count==0)
    {
        printf("\nNo Employee Records Available.\n");
        return;
    }

    printf("\n============= SALARY RECORDS =============\n");

    for(i=0;i<count;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("Employee ID : %d\n",emp[i].id);
        printf("Name        : %s\n",emp[i].name);
        printf("Basic Salary: %.2f\n",emp[i].basic);
        printf("HRA (20%%)   : %.2f\n",emp[i].hra);
        printf("DA (10%%)    : %.2f\n",emp[i].da);
        printf("PF (12%%)    : %.2f\n",emp[i].pf);
        printf("Net Salary  : %.2f\n",emp[i].netSalary);
    }
}

void searchEmployee()
{
    int id,i,found=0;

    printf("\nEnter Employee ID: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(emp[i].id==id)
        {
            printf("\nEmployee Found\n");

            printf("Employee ID : %d\n",emp[i].id);
            printf("Name        : %s\n",emp[i].name);
            printf("Basic Salary: %.2f\n",emp[i].basic);
            printf("HRA         : %.2f\n",emp[i].hra);
            printf("DA          : %.2f\n",emp[i].da);
            printf("PF          : %.2f\n",emp[i].pf);
            printf("Net Salary  : %.2f\n",emp[i].netSalary);

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nEmployee Not Found.\n");
}

void updateSalary()
{
    int id,i,found=0;

    printf("\nEnter Employee ID: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(emp[i].id==id)
        {
            printf("Enter New Basic Salary: ");
            scanf("%f",&emp[i].basic);

            calculateSalary(i);

            printf("\nSalary Updated Successfully.\n");

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
        printf("\n=====================================");
        printf("\n      SALARY MANAGEMENT SYSTEM");
        printf("\n=====================================");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Salary");
        printf("\n5. Exit");

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
                updateSalary();
                break;

            case 5:
                printf("\nThank You!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}