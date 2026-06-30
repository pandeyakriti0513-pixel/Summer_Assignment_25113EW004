//Q.Write a program to create menu driven string operation system
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char str[100];

void inputString()
{
    getchar();

    printf("\nEnter a String: ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")] = '\0';

    printf("\nString Stored Successfully.\n");
}

void displayString()
{
    if(strlen(str)==0)
    {
        printf("\nNo String Available.\n");
        return;
    }

    printf("\nString = %s\n",str);
}

void stringLength()
{
    int len=0;

    while(str[len]!='\0')
        len++;

    printf("\nLength = %d\n",len);
}

void reverseString()
{
    char temp[100];
    int i,len=0;

    while(str[len]!='\0')
        len++;

    for(i=0;i<len;i++)
        temp[i]=str[len-i-1];

    temp[len]='\0';

    printf("\nReversed String = %s\n",temp);
}

void upperCase()
{
    char temp[100];
    int i=0;

    while(str[i]!='\0')
    {
        temp[i]=toupper(str[i]);
        i++;
    }

    temp[i]='\0';

    printf("\nUppercase String = %s\n",temp);
}

void lowerCase()
{
    char temp[100];
    int i=0;

    while(str[i]!='\0')
    {
        temp[i]=tolower(str[i]);
        i++;
    }

    temp[i]='\0';

    printf("\nLowercase String = %s\n",temp);
}

void palindrome()
{
    int i;
    int len=0;

    while(str[len]!='\0')
        len++;

    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            printf("\nString is NOT Palindrome.\n");
            return;
        }
    }

    printf("\nString is Palindrome.\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n======================================");
        printf("\n MENU DRIVEN STRING OPERATIONS");
        printf("\n======================================");
        printf("\n1. Enter String");
        printf("\n2. Display String");
        printf("\n3. Find Length");
        printf("\n4. Reverse String");
        printf("\n5. Convert to Uppercase");
        printf("\n6. Convert to Lowercase");
        printf("\n7. Check Palindrome");
        printf("\n8. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                inputString();
                break;

            case 2:
                displayString();
                break;

            case 3:
                stringLength();
                break;

            case 4:
                reverseString();
                break;

            case 5:
                upperCase();
                break;

            case 6:
                lowerCase();
                break;

            case 7:
                palindrome();
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