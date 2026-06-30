//Q.Write a program to create quiz application
#include<stdio.h>

int main()
{
    int choice;
    int score = 0;

    printf("=====================================\n");
    printf("        GENERAL QUIZ APPLICATION\n");
    printf("=====================================\n");

    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d",&choice);

    if(choice==2)
        score++;

    printf("\nQ2. Which language is used to write C programs?\n");
    printf("1. Compiler\n");
    printf("2. Python\n");
    printf("3. C\n");
    printf("4. Java\n");
    printf("Enter your answer: ");
    scanf("%d",&choice);

    if(choice==3)
        score++;

    printf("\nQ3. Which symbol is used for comments in C?\n");
    printf("1. //\n");
    printf("2. ##\n");
    printf("3. <!-- -->\n");
    printf("4. **\n");
    printf("Enter your answer: ");
    scanf("%d",&choice);

    if(choice==1)
        score++;

    printf("\nQ4. Which function is used to print output?\n");
    printf("1. scanf()\n");
    printf("2. printf()\n");
    printf("3. gets()\n");
    printf("4. puts()\n");
    printf("Enter your answer: ");
    scanf("%d",&choice);

    if(choice==2)
        score++;

    printf("\nQ5. Which header file contains printf()?\n");
    printf("1. math.h\n");
    printf("2. stdlib.h\n");
    printf("3. string.h\n");
    printf("4. stdio.h\n");
    printf("Enter your answer: ");
    scanf("%d",&choice);

    if(choice==4)
        score++;

    printf("\n=====================================\n");
    printf("           QUIZ RESULT\n");
    printf("=====================================\n");

    printf("Correct Answers = %d\n",score);
    printf("Wrong Answers   = %d\n",5-score);

    printf("Percentage      = %.2f%%\n",(score/5.0)*100);

    if(score==5)
        printf("Grade : Excellent\n");
    else if(score>=4)
        printf("Grade : Very Good\n");
    else if(score>=3)
        printf("Grade : Good\n");
    else if(score>=2)
        printf("Grade : Average\n");
    else
        printf("Grade : Needs Improvement\n");

    printf("=====================================\n");

    return 0;
}