#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 100
#define TITLE_LEN 100
#define GENRE_LEN 50
#define DIRECTOR_LEN 50

typedef struct {
    char title[TITLE_LEN];
    char genre[GENRE_LEN];
    int year;
    char director[DIRECTOR_LEN];
} Movie;

Movie library[MAX_MOVIES];
int movieCount = 0;

// Function prototypes
void addMovie();
void displayMovies();
void searchMovie();
void sortMovies();
int findMovieIndexByTitle(char *title);
void swapMovies(Movie *a, Movie *b);

int main() {
    int choice;

    while (1) {
        printf("\nMovie Library Management System\n");
        printf("1. Add a new movie\n");
        printf("2. Display all movies\n");
        printf("3. Search for a movie by title\n");
        printf("4. Sort movies by title\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // to consume the newline character after entering choice

        switch (choice) {
            case 1:
                addMovie();
                break;
            case 2:
                displayMovies();
                break;
            case 3:
                searchMovie();
                break;
            case 4:
                sortMovies();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void addMovie() {
    if (movieCount >= MAX_MOVIES) {
        printf("The library is full. Cannot add more movies.\n");
        return;
    }

    Movie newMovie;
    printf("Enter movie title: ");
    fgets(newMovie.title, TITLE_LEN, stdin);
    newMovie.title[strcspn(newMovie.title, "\n")] = '\0';  // remove trailing newline

    if (findMovieIndexByTitle(newMovie.title) != -1) {
        printf("Movie with this title already exists.\n");
        return;
    }

    printf("Enter movie genre: ");
    fgets(newMovie.genre, GENRE_LEN, stdin);
    newMovie.genre[strcspn(newMovie.genre, "\n")] = '\0';  // remove trailing newline

    printf("Enter movie year: ");
    scanf("%d", &newMovie.year);
    getchar();  // to consume the newline character

    printf("Enter movie director: ");
    fgets(newMovie.director, DIRECTOR_LEN, stdin);
    newMovie.director[strcspn(newMovie.director, "\n")] = '\0';  // remove trailing newline

    library[movieCount] = newMovie;
    movieCount++;

    printf("Movie added successfully.\n");
}

void displayMovies() {
    if (movieCount == 0) {
        printf("No movies in the library.\n");
        return;
    }

    printf("\nList of all movies:\n");
    for (int i = 0; i < movieCount; i++) {
        printf("Title: %s\n", library[i].title);
        printf("Genre: %s\n", library[i].genre);
        printf("Year: %d\n", library[i].year);
        printf("Director: %s\n", library[i].director);
        printf("\n");
    }
}

void searchMovie() {
    char title[TITLE_LEN];
    printf("Enter the movie title to search: ");
    fgets(title, TITLE_LEN, stdin);
    title[strcspn(title, "\n")] = '\0';  // remove trailing newline

    int index = findMovieIndexByTitle(title);
    if (index == -1) {
        printf("Movie not found.\n");
    } else {
        printf("Movie details:\n");
        printf("Title: %s\n", library[index].title);
        printf("Genre: %s\n", library[index].genre);
        printf("Year: %d\n", library[index].year);
        printf("Director: %s\n", library[index].director);
    }
}

void sortMovies() {
    for (int i = 0; i < movieCount - 1; i++) {
        for (int j = 0; j < movieCount - i - 1; j++) {
            if (strcmp(library[j].title, library[j + 1].title) > 0) {
                swapMovies(&library[j], &library[j + 1]);
            }
        }
    }
    printf("Movies sorted alphabetically by title.\n");
}

int findMovieIndexByTitle(char *title) {
    for (int i = 0; i < movieCount; i++) {
        if (strcmp(library[i].title, title) == 0) {
            return i;
        }
    }
    return -1;
}

void swapMovies(Movie *a, Movie *b) {
    Movie temp = *a;
    *a = *b;
    *b = temp;
}

/*
Sample Program Runs:

1. Adding a new movie
=======================
Enter movie title: Inception
Enter movie genre: Sci-Fi
Enter movie year: 2010
Enter movie director: Christopher Nolan
Movie added successfully.

2. Displaying all movies
=======================
List of all movies:
Title: Inception
Genre: Sci-Fi
Year: 2010
Director: Christopher Nolan

3. Searching for a movie by title
=======================
Enter the movie title to search: Inception
Movie details:
Title: Inception
Genre: Sci-Fi
Year: 2010
Director: Christopher Nolan

4. Sorting movies by title
=======================
Movies sorted alphabetically by title.

*/
