





















void searchMovie() {
    char searchTitle[50];
    printf("Enter the title of the movie to search for: ");
    scanf("%s", searchTitle);
    for (int i = 0; i < movieCount; i++) {
        if (strcmp(library[i].title, searchTitle) == 0) {
            printf("Movie found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Genre: %s\n", library[i].genre);
            printf("Year: %d\n", library[i].year);
            printf("Director: %s\n", library[i].director);
            return;
        }
    }
    printf("Movie not found.\n");
}





















