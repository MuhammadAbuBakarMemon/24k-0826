#include <stdio.h>


struct Date
{
    int d;
    int m;
    int y;
};

struct Flight
{
    int f_num;
    char dept_c[100];
    char dest_c[100];
    struct Date f_date;
    int a_seats;
};

void bookseats(struct Flight *f);
void displayflightdetails(struct Flight *f);

int main(void)
{

    struct Flight aeroplane = {123, "Buneos Aires", "karachi", {03, 04, 2025}, 0};

    bookseats(&aeroplane);
    displayflightdetails(&aeroplane);

    return 0;
}

void displayflightdetails(struct Flight *f)
{
    printf("These are your flight details....\n");
    printf("The flight number is: %d\n", f->f_num);
    printf("The departure city is: %s\n", f->dept_c);
    printf("The destination city is: %s\n", f->dest_c);
    printf("The flight date is: %02d/%02d/%d\n", f->f_date.d, f->f_date.m, f->f_date.y);

}


void bookseats(struct Flight *f)
{
    if (f->a_seats > 0)
    {
        f->a_seats--;
        printf("The seat was successfully booked....\n");
    }
    else
    {
        printf("Unfortunately, sorry no available seats to book....\n");
    }
}