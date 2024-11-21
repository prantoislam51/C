#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("NO\n"); // Negative numbers are not triangular
    } else {
        int sum = 0;
        int triangular = 0;
        for (int i = 1; sum <= n; i++) {
            sum += i;
            if (sum == n) {
                triangular = 1;
                break;
            }
        }
        if (triangular)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
