#include <stdio.h>
#include <string.h>

struct Movies 
{
    char title[50];
    char genre[50];
    char director[50];
    int r_year;
    float rating;
};

void add_movies(struct Movies *n, int *count, int l);
void search_for_movies(struct Movies *n, int *count, char *genre);
void display_all_movie_details(struct Movies *n, int count);

int main(void)
{

    int len = 0;

    printf("Please enter the maximum number of movies you would like to add: \n");
    scanf("%d", &len);

    struct Movies m_ray[len];
    int c = 0;

    int option = 0;

    do
    {
        printf("1. Add new movie.\n");
        printf("2. Search for a movie.\n");
        printf("3. Display all movie details.\n");
        printf("Press any other key to exit.\n");
        scanf("%d", &option);

        while (getchar() != '\n');

        switch (option) 
        {

            case 1: 
                add_movies(m_ray, &c, len);
                break;

            case 2 : 
                char temp[50];

                printf("Please enter the genre of the movie you would like to search for: \n");
                fgets(temp, sizeof(temp), stdin);
                temp[strcspn(temp, "\n")] = '\0';

                search_for_movies(m_ray, &c, temp);
                break;

            case 3 : 
                display_all_movie_details(m_ray, c);
                break;

            default:
                printf("Invalid option entered. Exiting program....\n");
                break;

        }


    } while (option >= 1 && option <= 3);
    

    return 0;
}

void add_movies(struct Movies *n, int *count, int l)
{
    if (*count >= l)
    {
        printf("Unfortunately, no more space to add a movie....\n");
        return;
    }

    printf("Enter the title of your movie: \n");
    fgets(n[*count].title, sizeof(n->title)/sizeof(n->title[0]), stdin);
    n[*count].title[strcspn(n[*count].title, "\n")] = '\0';

    printf("Enter the genre of your movie: \n");
    fgets(n[*count].genre, sizeof(n->genre), stdin);
    n[*count].genre[strcspn(n[*count].genre, "\n")] = '\0';

    printf("Enter the director of your movie: \n");
    fgets(n[*count].director, sizeof(n->director), stdin);
    n[*count].director[strcspn(n[*count].director, "\n")] = '\0';

    printf("Please enter the release year of your movie: \n");
    scanf("%d", &n[*count].r_year);

    getchar();

    printf("Please enter the rating of your movie: \n");
    scanf("%f", &n[*count].rating);

    getchar();

    (*count)++;
}

void search_for_movies(struct Movies *n, int *count, char *genre)
{
    int found = 0;
    
    for (int m = 0; m < *count; m++)
    {
        if (!(strcmp(n[m].genre, genre)))
        {
            
            found = 1;

            printf("The genre (%s) of movie you were searching for is found.\n", n[m].genre);

            printf("The title of the movie is: %s\n", n[m].title);
            // printf("The genre of the movie is: %s\n",n[m]->genre);
            printf("The director of our movie is: %s\n", n[m].director);
            printf("The release year of the movie is: %d\n", n[m].r_year);
            printf("The rating of the movie is: %.2f\n", n[m].rating);
        }
    }

    if (!found)
    {
        printf("Unfortunately, the genre (%s) of movie you are looking for was not found....\n", genre);
    }

}

void display_all_movie_details(struct Movies *n, int count)
{

    if (count == 0)
    {
        printf("Unfortunately, there are no movies to display from here....\n");
    }

    for (int m = 0; m < count; m++)
    {
        printf("The details for Movie#%d are as follows\ntitle: %s\ngenre: %s\ndirector: %s\nreleaseyear: %d\nrating: %.2f\n", m+1, n[m].title, n[m].genre, n[m].director, n[m].r_year, n[m].rating);
        printf("\n");

        /*
        The dot operator is used when we have a direct structure variable in the function not a pointer to the structure variable
        And the arrow operator is used to access members of a structure when you have a pointer to a structure and not a direct structure variable 

        n in our function is used as an array of structures (i.e a direct structure variable) and n is not a pointer to the structure 

        n is a pointer to the array of struct Movies, intially n is passed as a pointer the structure, but when we write n[m] we are actually accessing the mth index of the array n 
        (indexing on the array of structures)
        at this point n[m] means we are referring to the structure n[m] is a structure and not a pointer
        */
    }
}