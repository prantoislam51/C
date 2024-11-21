#include <stdio.h>

int main() {
    int rows, spaces, hashes;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
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
