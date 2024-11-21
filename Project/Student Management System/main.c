


#include <stdio.h>
void addMovie(char movie_Title[],char genre[],int year,char director[]){
    printf("Inter The Movie Title: ");
    scanf("%s",movie_Title);
    printf("Inter The Genre: ");
    scanf("%s",genre);
    printf("Inter The Year: ");
    scanf("%d",&year);
    printf("Inter The Director Name: ");
    scanf("%s",director);
    printf("All data added successfully...\n\n\n\n\n");
}
void listMovie(char movie_Title[],char genre[],int year,char director[]){
    printf("Movie Title: %s\n",movie_Title);
    printf("Genre: %s\n",genre);
    printf("Year: %d\n",year);
    printf("Director: %s\n\n",director);
}
void searchMovie(char movie_Title[],char genre[],int year,char director[]){
    
    
}


int main(){
    int select;
    char movie_Title[20];
    char genre[20];
    int year;
    char director[10];
    char search_Title[100];
    while (1)
    {
        printf("==== Student Management System ====");
        printf("\n1. Add Movie");
        printf("\n2. List Movie");
        printf("\n3. Search Movie");
        printf("\n4. Exit.....");
        printf("\n--------------------------");
        printf("\nSelect an option: ");
        scanf("%d", &select);

        switch (select)
        {
        case 1:
            addMovie(movie_Title,genre,year,director);
            break;

            case 2:
            listMovie(movie_Title,genre,year,director);
            break;

            case 3:
            searchMovie(movie_Title,genre,year,director);
            break;
            default:
                break;
        }
    }
}