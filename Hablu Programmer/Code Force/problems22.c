
#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i % 2 != 0) {
                // If odd row, fill it with "#"
                printf("#");
            } else {
                if (i % 4 == 0) {
                    // If row number is divisible by 4, 1st cell will be "#"
                    if (j == 1) {
                        printf("#");
                    } else {
                        printf(".");
                    }
                } else {
                    // If row number is not divisible by 4, last cell will be "#"
                    if (j == m) {
                        printf("#");
                    } else {
                        printf(".");
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}
