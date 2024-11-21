#include <stdio.h>
#include <math.h>

struct Pointintwodimension 
{
    float x;
    float y;
};

void position_checker(struct Pointsintwodimensions *c1, struct Pointsintwodimensions *c2, struct Pointsintwodimensions *c3, struct Pointsintwodimensions *c4, struct Pointsintwodimensions *p);
float dist_btw_two_points(struct Pointsintwodimensions *p1, struct Pointsintwodimensions *p2);

int main(void)
{



    return 0;
}

float dist_btw_two_points(struct Pointsintwodimensions *p1, struct Pointsintwodimensions *p2)
{
    float dist = 0;

    dist = sqrt( pow((p1.x - p2.x), 2.0) - pow((p2.x - p2.y), 2.0) );

    return dist;
}

void position_checker(struct Pointsintwodimensions *c1, struct Pointsintwodimensions *c2, struct Pointsintwodimensions *c3, struct Pointsintwodimensions *c4, struct Pointsintwodimensions *p)
{

    if (c1.y < p.y && c2.y > p.y && c2.x > p.x && c3.x < p.x)
    {
        printf("The point provided lies with in the rectanglar boundary....\n");
    }
    else
    {
        printf("The point provided by you does not lie with in the specific rectangular boundary....");
    }

}