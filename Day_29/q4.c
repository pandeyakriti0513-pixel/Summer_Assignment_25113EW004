//Q.Write a program to create inventory management system
#include<stdio.h>
#include<string.h>

#define MAX 100

struct product
{
    int id;
    char name[100];
    int quantity;
    float price;
};

struct product inventory[MAX];

int count = 0;
int nextID = 1;

void addProduct()
{
    if(count >= MAX)
    {
        printf("\nInventory is Full!\n");
        return;
    }

    inventory[count].id = nextID++;

    getchar();

    printf("\nEnter Product Name: ");
    fgets(inventory[count].name,sizeof(inventory[count].name),stdin);
    inventory[count].name[strcspn(inventory[count].name,"\n")] = '\0';

    printf("Enter Quantity: ");
    scanf("%d",&inventory[count].quantity);

    printf("Enter Price: ");
    scanf("%f",&inventory[count].price);

    count++;

    printf("\nProduct Added Successfully.\n");
}

void displayProducts()
{
    int i;

    if(count==0)
    {
        printf("\nNo Products Available.\n");
        return;
    }

    printf("\n============= INVENTORY =============\n");

    for(i=0;i<count;i++)
    {
        printf("\nProduct %d\n",i+1);
        printf("Product ID : %d\n",inventory[i].id);
        printf("Name       : %s\n",inventory[i].name);
        printf("Quantity   : %d\n",inventory[i].quantity);
        printf("Price      : %.2f\n",inventory[i].price);
    }
}

void searchProduct()
{
    int id;
    int i,found=0;

    printf("\nEnter Product ID: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(inventory[i].id==id)
        {
            printf("\nProduct Found\n");
            printf("Product ID : %d\n",inventory[i].id);
            printf("Name       : %s\n",inventory[i].name);
            printf("Quantity   : %d\n",inventory[i].quantity);
            printf("Price      : %.2f\n",inventory[i].price);

            found=1;
            break;
        }
    }

    if(!found)
    {
        printf("\nProduct Not Found.\n");
    }
}

void updateProduct()
{
    int id;
    int i,found=0;

    printf("\nEnter Product ID to Update: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(inventory[i].id==id)
        {
            getchar();

            printf("Enter New Product Name: ");
            fgets(inventory[i].name,sizeof(inventory[i].name),stdin);
            inventory[i].name[strcspn(inventory[i].name,"\n")] = '\0';

            printf("Enter New Quantity: ");
            scanf("%d",&inventory[i].quantity);

            printf("Enter New Price: ");
            scanf("%f",&inventory[i].price);

            printf("\nProduct Updated Successfully.\n");

            found=1;
            break;
        }
    }

    if(!found)
    {
        printf("\nProduct Not Found.\n");
    }
}

void deleteProduct()
{
    int id;
    int i,j,found=0;

    printf("\nEnter Product ID to Delete: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(inventory[i].id==id)
        {
            for(j=i;j<count-1;j++)
            {
                inventory[j]=inventory[j+1];
            }

            count--;

            printf("\nProduct Deleted Successfully.\n");

            found=1;
            break;
        }
    }

    if(!found)
    {
        printf("\nProduct Not Found.\n");
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n======================================");
        printf("\n     INVENTORY MANAGEMENT SYSTEM");
        printf("\n======================================");
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Update Product");
        printf("\n5. Delete Product");
        printf("\n6. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateProduct();
                break;

            case 5:
                deleteProduct();
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