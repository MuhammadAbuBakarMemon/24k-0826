#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addproduct();
void updateproduct();
void displayproducts();

struct Inventory
{
    int pid;
    char name[50];
    float pr;
    int qty;
};

int main(void)
{

    int option = 0;

    do 
    {

        printf("Product Inventory anagement System\n");
        printf("Please choose an option from below: \n");
        printf("1. Add a new product\n");
        printf("2. Update details regarding a product\n");
        printf("3. Print all product details, and compute the total value of the inventory\n");
        printf("4. Exit\n");

        scanf("%d", &option);

        switch (option)
        {
            case 1 :
                addproduct();
                break;
            case 2 :
                updateproduct();
                break;
            case 3:
                displayproducts();
                break;
            case 4:
                printf("Exiting the program, Jazakallah for using the inventoru management system.\n");
            default:
                printf("Ivalid option was chosen.\n");
                break;

        }

    } while (option !=- 4);

    return 0;
}

void addproduct()
{
    FILE *fptr;

    fptr = fopen("inventory.txt", "a+");

    if (fptr == NULL)
    {
        printf("File not found.\n");
        printf("Creating a new file.\n");
        
        fclose(fptr);

        fptr = fopen("inventory.txt", "w");

        if (fptr == NULL)
        {
            printf("File could not be created.\n");
            printf("Exiting program.\n");
            return;
        }

    }

    struct Inventory i1;

    printf("Enter the product ID: \n");
    scanf("%d", i1.pid);

    printf("Enter the product Name: \n");
    fgets(i1.name, sizeof(i1.name), stdin);
    i1.name[strcspn(i1.name, "\n")] = '\0';

    printf("Enter the product's price: \n");
    scanf("%.2f", i1.pr);

    printf("Enter the product quantity: \n");
    scanf("%d", i1.qty);

    FILE *cptr;
    cptr = fopen("inventory.txt", "r");
    struct Inventory i2;


    if (cptr == NULL)
    {
        printf("The file could not be found.\n");
    }

    while (fscanf(fptr, "%d %s %.2f %d", &i2.pid, i2.name, &i2.pr, &i2.qty) == 4)
    {
        if (i2.pid == i1.pid)
        {
            printf("A product with the same product ID exists in your file already, Please enter another Product ID as they are unique.\n");
            printf("Exiting program.\n");
            return;
        }
    }

    // we could have used %49s as a format specifier here to scanf the name of our product, although it would have ensured that only the first 49 characters were scanned 
    //  but that would have resulrted in extra space taht would be unnecesasaty in our flle, and I assumed that all product names would be single word andf not multi words, that is why I am using %s

    fprintf(fptr, "%d %s %.2f %d\n", i1.pid, i1.name, i1.pr, i1.qty);

    fclose(fptr);

    printf("The new product was added successfully.\n");

}

void updateproduct()
{
    FILE *fptr;
    FILE *tptr;

    fptr = fopen("inventory.txt", "r+");

    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        printf("Exiting program.\n");
        return;
    }

    tptr = fopen("temp.txt", "w");

    if (tptr == NULL)
    {
        printf("File could not be created.\n");
        printf("Exiting program.\n");

        fclose(fptr);

        return;
    }

    int id = 0;
    struct Inventory i1;
    int found = 0;

    printf("Enter the product ID you would like to update: \n");
    scanf("%d", &id);

    while (fscanf(fptr, "%d %s %.2f %d", &i1.pid, i1.name, &i1.pr, &i1.qty) == 4)
    {
        if (id == i1.pid)
        {
            
            found = 1;
            int ch = 0;

            printf("Please choose from the below options.\n");
            printf("1. Update the quantity of a product.\n");
            printf("2. Update the price of a product.\n");
            scanf("%d", &ch);

            if (ch == 1)
            {
                printf("Enter the updated quantity of this product: \n");
                scanf("%d", &i1.qty);
            }
            else if (ch == 2)
            {
                printf("Enter the updated price of this product: \n");
                scanf("%d", &i1.pr);
            }
            else
            {
                printf("Invalid option was chosen.\n");
                return;
            }
        }

        fprintf(tptr, "%d %s %.2f %d", i1.pid, i1.name, i1.pr, i1.qty);
    }

    if (!found)
    {
        printf("The product ID (%d) you entered could not be found.\n", id);
        remove("temp.txt");
    }
    else
    {
        remove("inventory.txt");
        rename("temp.txt", "inventory.txt");
    }
    
}

void displayproducts()
{
    FILE *fptr;
    fptr = fopen("inventory.txt", "r");

    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        printf("Exiting program.\n");
        return;
    }

    struct Inventory i1;
    float tval = 0.0;

    while (fscanf(fptr, "%d %s %.2f %d", &i1.pid, i1.name, &i1.pr, &i1.qty) == 4)
    {
       printf("Product ID: %d, Product Name: %s, Product Price: %.2f, Product Quantity: %d\n", i1.pid, i1.name, i1.pr, i1.qty);

       tval += i1.pr * i1.qty; 
    }

    printf("The total value of the inventory is: %.2f\n", tval);

}