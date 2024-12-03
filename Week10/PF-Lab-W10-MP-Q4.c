#include <stdio.h>
#include <string.h>

void addnewcars(struct Cars *n, int *num, int n1);
void displaycars(struct Cars *n, int *num);
void search_for_cars(struct Cars *n, int *num);

struct Cars 
{
    char make[30];
    char model[30];
    int year;
    float price;
    float mileage;
};

int main(void)
{

    int c = 0;
    int n = 0;

    printf("Please specify the maximum number of cars that your database may accomodate: \n");
    scanf("%d", &n);

    getchar();

    struct Cars my_car[n];
    addnewcars(&my_car, &c, n);

    return 0;
}

void addnewcars(struct Cars *n, int *num, int n1)
{

    if (*num >= n1)
    {
        printf("Unfortunately, no more cars can be added to the database: \n");
        return;
    }

    printf("Enter the details of the new car you would like to add: \n");

    printf("Enter make: \n");
    fgets(n[*num].make, sizeof(n->make), stdin);
    n[*num].make[strcspn(n[*num].make, "\n")] = '\0';

    printf("Enter model: \n");
    fgets(n[*num].model, sizeof(n->model), stdin);
    n[*num].model[strcspn(n[*num].model, "\n")] = '\0';

    printf("Enter year: \n");
    scanf("%d", &n[*num].year);

    printf("Enter price: \n");
    scanf("%f", &n[*num].price);

    printf("Enter mileage: \n");
    scanf("%f", &n[*num].mileage);

    (*num)++;

    printf("Car entered into the database successfully.....\n");

}

void displaycars(struct Cars *n, int *num)
{

    if (*num == 0)
    {
        printf("unfortunately, there are no cars avavilabe in your databse to display.....");
        return;
    }

    for (int m = 0; m < *num; m++)
    {
        printf("The Details for Car Number#%d are: \n", m + 1);

        printf("The make is: \n");
        fputs(n[*num].make, stdout);

        printf("The model is: \n");
        fputs(n[*num].model, stdout);

        printf("The year for the  car is: %d\n", n[*num].year);

        printf("The price for your car is: %.2f\n", n[*num].price);

        printf("The mileage for your car is: %f\n", n[*num].mileage);

        printf("\n");

    }

}

void search_for_cars(struct Cars *n, int *num)
{

    int opt = 0;

    printf("Please choose the option that has the appropriate property of the car on the basis of which you would like to search from the database: \n");
    printf("1. Make\n");
    printf("2. Model\n");
    printf("Press any other key lto exit.");
    scanf("%d", &opt);

    if (opt == 1)
    {

    }
    else if (opt == 2)
    {

    }
    else
    {
        printf("Exiting program....\n");
        return 0;
    }

}
