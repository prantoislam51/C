

#include <stdio.h>
#include <string.h>

struct Movie {
    char title[100];
    char genre[100];
    int year;
    char director[100];
};

void addMovie(struct Movie *movie) {
    printf("Enter The Movie Title: ");
    scanf(" %[^\n]%*c", movie->title);
    printf("Enter The Genre: ");
    scanf(" %[^\n]%*c", movie->genre);
    printf("Enter The Year: ");
    scanf("%d", &movie->year);
    printf("Enter The Director Name: ");
    scanf(" %[^\n]%*c", movie->director);
    printf("All data added successfully...\n\n\n\n\n");
}

void listMovie(struct Movie movie) {
    printf("Movie Title: %s\n", movie.title);
    printf("Genre: %s\n", movie.genre);
    printf("Year: %d\n", movie.year);
    printf("Director: %s\n\n", movie.director);
}

void searchMovie(struct Movie movie, char searchTitle[]) {
    if (strcmp(movie.title, searchTitle) == 0) {
        printf("Movie Found:\n");
        listMovie(movie);
    } else {
        printf("Movie with title '%s' not found.\n\n", searchTitle);
    }
}

int main() {
    int select;
    struct Movie movie;
    char searchTitle[100];

    while (1) {
        printf("==== Movie Management System ====");
        printf("\n1. Add Movie");
        printf("\n2. List Movie");
        printf("\n3. Search Movie");
        printf("\n4. Exit");
        printf("\n--------------------------");
        printf("\nSelect an option: ");
        scanf("%d", &select);

        switch (select) {
            case 1:
                addMovie(&movie);
                break;
            case 2:
                listMovie(movie);
                break;
            case 3:
                printf("Enter the title to search: ");
                scanf(" %[^\n]%*c", searchTitle);
                searchMovie(movie, searchTitle);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}
