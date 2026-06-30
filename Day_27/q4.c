//Q.Write a program to create marksheet generation system
#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[100];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

void calculateResult(struct student *s)
{
    int i;

    s->total = 0;

    for(i=0;i<5;i++)
    {
        s->total += s->marks[i];
    }

    s->percentage = s->total / 5.0;

    if(s->percentage >= 90)
        s->grade = 'A';
    else if(s->percentage >= 75)
        s->grade = 'B';
    else if(s->percentage >= 60)
        s->grade = 'C';
    else if(s->percentage >= 40)
        s->grade = 'D';
    else
        s->grade = 'F';
}

void displayMarksheet(struct student s)
{
    int i;

    printf("\n========================================");
    printf("\n          STUDENT MARKSHEET");
    printf("\n========================================");

    printf("\nRoll Number : %d",s.roll);
    printf("\nName        : %s",s.name);

    printf("\n\nMarks Obtained");

    for(i=0;i<5;i++)
    {
        printf("\nSubject %d : %d",i+1,s.marks[i]);
    }

    printf("\n----------------------------------------");
    printf("\nTotal      : %d / 500",s.total);
    printf("\nPercentage : %.2f%%",s.percentage);
    printf("\nGrade      : %c",s.grade);

    if(s.grade=='F')
        printf("\nResult     : FAIL");
    else
        printf("\nResult     : PASS");

    printf("\n========================================\n");
}

int main()
{
    struct student s;
    int i;

    printf("========================================");
    printf("\n      MARKSHEET GENERATION SYSTEM");
    printf("\n========================================");

    printf("\nEnter Roll Number: ");
    scanf("%d",&s.roll);

    getchar();

    printf("Enter Student Name: ");
    fgets(s.name,sizeof(s.name),stdin);
    s.name[strcspn(s.name,"\n")] = '\0';

    printf("\nEnter Marks of 5 Subjects\n");

    for(i=0;i<5;i++)
    {
        while(1)
        {
            printf("Subject %d: ",i+1);
            scanf("%d",&s.marks[i]);

            if(s.marks[i] >= 0 && s.marks[i] <= 100)
                break;

            printf("Invalid Marks! Enter marks between 0 and 100.\n");
        }
    }

    calculateResult(&s);

    displayMarksheet(s);

    return 0;
}