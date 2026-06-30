//Q.Write a program to create bank account system
#include<stdio.h>
#include<string.h>
struct account
{
    int accountNo;
    char name[100];
    float balance;
};
int main()
{
    struct account acc;
    int choice;
    float amount;
    int accountCreated = 0;

    while(1)
    {
        printf("\n====================================");
        printf("\n      BANK ACCOUNT SYSTEM");
        printf("\n====================================");
        printf("\n1. Create Account");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Check Balance");
        printf("\n5. Display Account Details");
        printf("\n6. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\nEnter Account Number: ");
                scanf("%d",&acc.accountNo);

                getchar();

                printf("Enter Account Holder Name: ");
                fgets(acc.name,sizeof(acc.name),stdin);
                acc.name[strcspn(acc.name,"\n")] = '\0';

                printf("Enter Initial Balance: ");
                scanf("%f",&acc.balance);

                accountCreated = 1;

                printf("\nAccount Created Successfully.\n");
                break;

            case 2:

                if(!accountCreated)
                {
                    printf("\nCreate an Account First!\n");
                    break;
                }

                printf("Enter Amount to Deposit: ");
                scanf("%f",&amount);

                if(amount <= 0)
                {
                    printf("Invalid Amount!\n");
                }
                else
                {
                    acc.balance += amount;
                    printf("Deposit Successful.\n");
                    printf("Updated Balance = %.2f\n",acc.balance);
                }

                break;

            case 3:

                if(!accountCreated)
                {
                    printf("\nCreate an Account First!\n");
                    break;
                }

                printf("Enter Amount to Withdraw: ");
                scanf("%f",&amount);

                if(amount <= 0)
                {
                    printf("Invalid Amount!\n");
                }
                else if(amount > acc.balance)
                {
                    printf("Insufficient Balance!\n");
                }
                else
                {
                    acc.balance -= amount;
                    printf("Withdrawal Successful.\n");
                    printf("Remaining Balance = %.2f\n",acc.balance);
                }

                break;

            case 4:

                if(!accountCreated)
                {
                    printf("\nCreate an Account First!\n");
                }
                else
                {
                    printf("\nCurrent Balance = %.2f\n",acc.balance);
                }

                break;

            case 5:

                if(!accountCreated)
                {
                    printf("\nCreate an Account First!\n");
                }
                else
                {
                    printf("\n========== ACCOUNT DETAILS ==========\n");
                    printf("Account Number : %d\n",acc.accountNo);
                    printf("Account Holder : %s\n",acc.name);
                    printf("Balance        : %.2f\n",acc.balance);
                }

                break;

            case 6:

                printf("\nThank You for Using the Bank Account System.\n");
                return 0;

            default:

                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}