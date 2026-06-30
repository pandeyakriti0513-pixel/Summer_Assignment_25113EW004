//Q.Write a program to create ATM stimulation
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int pin = 1234, enteredPin;
    int choice;
    float balance = 10000.0;
    float amount;

    printf("========================================\n");
    printf("          ATM SIMULATION SYSTEM\n");
    printf("========================================\n");

    printf("Enter ATM PIN: ");
    scanf("%d",&enteredPin);

    if(enteredPin != pin)
    {
        printf("\nIncorrect PIN!\n");
        return 0;
    }

    while(1)
    {
        printf("\n========== MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("==========================\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nCurrent Balance = ₹%.2f\n",balance);
                break;

            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%f",&amount);

                if(amount <= 0)
                {
                    printf("Invalid amount!\n");
                }
                else
                {
                    balance += amount;
                    printf("Amount deposited successfully.\n");
                    printf("Updated Balance = ₹%.2f\n",balance);
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%f",&amount);

                if(amount <= 0)
                {
                    printf("Invalid amount!\n");
                }
                else if(amount > balance)
                {
                    printf("Insufficient Balance!\n");
                }
                else
                {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                    printf("Remaining Balance = ₹%.2f\n",balance);
                }
                break;

            case 4:
                printf("\nThank you for using our ATM.\n");
                exit(0);

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}