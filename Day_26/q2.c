//Q.Write a program to create a voting eligibilty system
#include<stdio.h>
#include<string.h>

void line()
{
    int i;
    printf("\n");
    for(i=0;i<45;i++)
        printf("=");
    printf("\n");
}

int main()
{
    char name[100];
    int age;
    char nationality[50];

    line();
    printf("        VOTING ELIGIBILITY SYSTEM");
    line();

    printf("Enter Name : ");
    fgets(name,sizeof(name),stdin);

    name[strcspn(name,"\n")] = '\0';

    printf("Enter Age : ");
    scanf("%d",&age);

    getchar();

    printf("Enter Nationality : ");
    fgets(nationality,sizeof(nationality),stdin);

    nationality[strcspn(nationality,"\n")] = '\0';

    line();

    printf("Applicant Details\n");
    printf("-----------------------------\n");
    printf("Name        : %s\n",name);
    printf("Age         : %d\n",age);
    printf("Nationality : %s\n",nationality);

    line();

    if(age >= 18 && strcmp(nationality,"Indian")==0)
    {
        printf("Congratulations!\n");
        printf("You are eligible to vote.\n");
    }
    else if(age < 18)
    {
        printf("Sorry!\n");
        printf("You are not eligible because your age is below 18.\n");
    }
    else
    {
        printf("Sorry!\n");
        printf("Only Indian citizens are eligible to vote.\n");
    }

    line();

    return 0;
}