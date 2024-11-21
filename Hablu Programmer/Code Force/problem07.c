#include <stdio.h>
int check_flag(int n, int m, char flag[n][m]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 1; j < m; j++) {
            if (flag[i][j] != flag[i][0]) {
                return 0; 
            }
        }
    }
    for (i = 1; i < n; i++) {
        if (flag[i][0] == flag[i-1][0]) {
            return 0; 
        }
    }
    return 1;
}
int main() {
    int n, m, i, j;
    char flag[100][101];
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf(" %c", &flag[i][j]); 
        }
    }
    if (check_flag(n, m, flag)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
