//Q.Write a program to create menu driven calculator
#include<stdio.h>
#include<math.h>

int main()
{
    int choice;
    int a, b;
    float result;

    while(1)
    {
        printf("\n====================================");
        printf("\n      MENU DRIVEN CALCULATOR");
        printf("\n====================================");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulus");
        printf("\n6. Power");
        printf("\n7. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\nEnter Two Numbers: ");
                scanf("%d%d",&a,&b);

                printf("Sum = %d\n",a+b);
                break;

            case 2:

                printf("\nEnter Two Numbers: ");
                scanf("%d%d",&a,&b);

                printf("Difference = %d\n",a-b);
                break;

            case 3:

                printf("\nEnter Two Numbers: ");
                scanf("%d%d",&a,&b);

                printf("Product = %d\n",a*b);
                break;

            case 4:

                printf("\nEnter Two Numbers: ");
                scanf("%d%d",&a,&b);

                if(b==0)
                {
                    printf("Division by Zero is Not Possible!\n");
                }
                else
                {
                    result = (float)a/b;
                    printf("Quotient = %.2f\n",result);
                }

                break;

            case 5:

                printf("\nEnter Two Numbers: ");
                scanf("%d%d",&a,&b);

                if(b==0)
                {
                    printf("Modulus by Zero is Not Possible!\n");
                }
                else
                {
                    printf("Remainder = %d\n",a%b);
                }

                break;

            case 6:

                printf("\nEnter Base and Exponent: ");
                scanf("%d%d",&a,&b);

                printf("Result = %.2f\n",pow(a,b));
                break;

            case 7:

                printf("\nThank You for Using Calculator.\n");
                return 0;

            default:

                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}