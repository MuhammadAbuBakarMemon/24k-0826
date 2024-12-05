#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int empID;
    char name[50];
    float salary;
};

void addr(struct Employee *m, int *c, int *size);
void deleter(struct Employee *m, int *c, int *size);
void updater(struct Employee *m, int *c);

int main(void)
{

    struct Employee *e;

    int isize = 0;
    int csize = 0;
    int reallocatesize = 0;

    printf("Enter the initial size of your array: \n");
    scanf("%d", &isize);

    e = (struct Employee *) calloc(isize, sizeof(struct Employee));

    if (e == NULL)
    {
        printf("Memory allocatioin failed.\n");
        printf("Exiting program.\n");
        return 0;
    }

    csize = isize;

    int count = 0;

    int opt = 0;

    do 
    {
        printf("Welcome to employee database: \n");
        printf("1. Add employee record.\n");
        printf("2. delete Employee record.\n.\n");
        printf("3. Update Employee record details.\n");
        printf("4. Exit.\n");

        scanf("%d", &opt);

        switch (opt)
        {
            case 1:
                addr(e, &count, &csize);
                break;
            case 2:
                deleter(e, &count, &csize);
                break;
            case 3:
                updater(e, &count);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invallid choice was entered.\n");
                break;

        } 

    } while (opt != 4) ;

    free(e);

    return 0;
}

void addr(struct Employee *m, int *c, int *size)
{
    if (*size >= *c)
    {
        *size *= 2;

        m = realloc(m, *size * sizeof(struct Employee)); 

        if (m == NULL)
        {
            printf("Memory allocatioin failed.\n");
            printf("Exiting program.\n");
            return;
    
        }

        printf("Enter the Employee ID you would like to add: \n");
        scanf("%d", m[*c].empID);

        printf("Enter the Employee name you would like to add: \n");
        fgets(m[*c].name, sizeof(m[*c].name), stdin);
        m[*c].name[strcspn(m[*c].name, "\n")] = '\0';

        printf("Enter the Employee salary you would like to add: \n");
        scanf("%.2f", m[*c].salary);

        (*c)++;
    }
}

void deleter(struct Employee *m, int *c, int *csize)
{

    int eid = 0;

    printf("Enter the employee ID of the record you would like to delete: \n");
    scanf("%d", &eid);

    for (int m = 0; m < *c; m++)
    {
        if ( eid == m[*c].empID )
        {
            m[*c].empID = 0;
            m[*c].salary = 0.0;
            m[*c].name = " ";

            // resizing the dynamically allocated array;
            *(csize)--;

            m = realloc(m, *csize *sizeof(struct Employee));
        }
    }
}

void updater(struct Employee *m, int *c)
{

    int eid = 0;

    printf("Enter the employee ID of the record you would like to delete: \n");
    scanf("%d", &eid);

    for (int m = 0; m < *c; m++)
    {
        if ( eid == m[*c].empID )
        {
            printf("1. Update the employee salary\n");

            float nsal = 0.0;

            printf("Enter the new salary of your employee: \n");
            scanf("%.2f", &nsal);

            m[*c].salary = nsal;

            return;
        }
    }

    printf("No emplyee record with the ID (%d) was found.\n", eid);

}