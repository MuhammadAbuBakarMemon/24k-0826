#include <stdio.h>
#include <math.h>

struct Pointintwodimension 
{
    float x;
    float y;
};

void position_checker(struct Pointintwodimension *c1, struct Pointintwodimension *c2, struct Pointintwodimension *c3, struct Pointintwodimension *c4, struct Pointintwodimension *p);
float dist_btw_two_points(struct Pointintwodimension *p1, struct Pointintwodimension *p2);

int main(void)
{

    int n = 0;
    struct Pointintwodimension p1, p2, p3, p4, p5;
    

    do 
    {

        printf("PLease choose an option: \n");
        printf("1. Calculate the distance between two points....\n");
        printf("2. Check if a point is placed inside a rectanlge....\n");
        printf("3. Exit....\n");
        scanf("%d", &n);

        switch (n) 
        {
            case 1 :

                printf("Please enter the coordinates of your first point.....\n");

                printf("Please enter the x coordinate of your first point: \n");
                scanf("%f", &p1.x);
                printf("Please enter the y coordinate of your first point: \n");
                scanf("%f", &p1.y);

                printf("Please enter the coordinates of your second point.....\n");

                printf("Please enter the x coordinate of your second point: \n");
                scanf("%f", &p2.x);
                printf("Please enter the y coordinate of your second point: \n");
                scanf("%f", &p2.y);

                printf("The distance between two points is: %.2f\n", dist_btw_two_points(&p1, &p2));

                break;

            case 2 :

                printf("Start entering the points of your rectangle in clockwise direction....\n");

                printf("Please enter the coordinates of your first point in the rectangle (the top right most point).....\n");

                printf("Please enter the x coordinate of your first point: \n");
                scanf("%f", &p1.x);
                printf("Please enter the y coordinate of your first point: \n");
                scanf("%f", &p1.y);

                printf("Please enter the coordinates of your second point in the rectangle (the bottom right most point).....\n");

                printf("Please enter the x coordinate of your second point: \n");
                scanf("%f", &p2.x);
                printf("Please enter the y coordinate of your second point: \n");
                scanf("%f", &p2.y);

                printf("Please enter the coordinates of your third point in the rectangle (the bottom left most point).....\n");

                printf("Please enter the x coordinate of your third point: \n");
                scanf("%f", &p3.x);
                printf("Please enter the y coordinate of your second point: \n");
                scanf("%f", &p3.y);

                printf("Please enter the coordinates of your fourth point in the rectangle (the top left most point).....\n");

                printf("Please enter the x coordinate of your fourth point: \n");
                scanf("%f", &p4.x);
                printf("Please enter the y coordinate of your fourth point: \n");
                scanf("%f", &p4.y);

                printf("Please enter the coordinates of the point you would like to determine if that point lies with in the rectangle: \n");

                printf("Please enter the x coordinate of your target point: \n");
                scanf("%f", &p5.x);
                printf("Please enter the y coordinate of your target point: \n");
                scanf("%f", &p5.y);

                position_checker(&p1, &p2, &p3, &p4, &p5);

                break;

            case 3 :
                printf("Exiting Program....\n");
                break;

            default :
            printf("Invalid option entered....\n");
                break;
        }

    } while (n != 3);

    return 0;
}

float dist_btw_two_points(struct Pointintwodimension *p1, struct Pointintwodimension *p2)
{
    float dist = 0;

    dist = sqrt( pow((p1->x - p2->x), 2.0) + pow((p1->y - p2->y), 2.0) );

    return dist;
}

void position_checker(struct Pointintwodimension *c1, struct Pointintwodimension *c2, struct Pointintwodimension *c3, struct Pointintwodimension *c4, struct Pointintwodimension *p)
{

    float maxX = fmax( fmax(c1->x, c2->x), fmax(c3->x, c4->x));
    float minX = fmin( fmin(c1->x, c2->x), fmin(c3->x, c4->x));

    float maxY = fmax( fmax(c1->y, c2->y), fmax(c3->y, c4->y));
    float minY = fmin( fmin(c1->y, c2->y), fmin(c3->y, c4->y));

    if (p->x >= minX && p->x <= maxX && p->y >= minY && p->y <= maxY)
    {
        printf("The point provided lies with in the rectanglar boundary....\n");
    }
    else
    {
        printf("The point provided by you does not lie with in the specific rectangular boundary....\n");
    }

    //Incorrect approach based on assumptions
    // if (c1->y < p->y && c2->y > p->y && c2->x > p->x && c3->x < p->x)
    // {
    //     printf("The point provided lies with in the rectanglar boundary....\n");
    // }
    // else
    // {
    //     printf("The point provided by you does not lie with in the specific rectangular boundary....\n");
    // }

}