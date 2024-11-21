#include <stdio.h>

int main() {
    int rows, spaces, hashes;
    
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        // Print hashes
        for (hashes = 1; hashes <= 2 * i - 1; hashes++) {
            printf("#");
        }
        // Move to the next line
        printf("\n");
    }
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        for (hashes = 1; hashes <= 2 * i - 1; hashes++) {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
