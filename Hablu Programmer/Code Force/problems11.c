

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int up = 2e9 + 99, down = 0, left = 2e9 + 99, right = 0;
    char grid[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf(" %c", &grid[i][j]);
            if (grid[i][j] == '*') {
                up = (up < i) ? up : i;
                left = (left < j) ? left : j;
                down = (down > i) ? down : i;
                right = (right > j) ? right : j;
            }
        }
    }

    for (int i = up; i <= down; ++i) {
        for (int j = left; j <= right; ++j) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
