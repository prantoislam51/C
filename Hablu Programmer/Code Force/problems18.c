
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Input the elements of the matrix
    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // Capture the row and column number where 1 is found
    int row, col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] == 1) {
                row = i + 1;
                col = j + 1;
            }
        }
    }
    // Subtract the row and column number (x, y) from (3, 3) and if result is negative make it positive
    int rowMove = ((3 - row) < 0) ? ((3 - row) * -1) : (3 - row);
    int colMove = ((3 - col) < 0) ? ((3 - col) * -1) : (3 - col);
    // Output
    printf("%d\n", rowMove + colMove);
    return 0;
}
