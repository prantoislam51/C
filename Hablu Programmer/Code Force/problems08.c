#include <stdio.h>
int main() {
    int n, flag = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int minimum = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < minimum) {
            minimum = a[i];
        }
    }
    int second_order_statistic = -101;
    for (int i = 0; i < n; i++) {
        if (a[i] > minimum) {
            if (second_order_statistic == -101 || a[i] < second_order_statistic) {
                second_order_statistic = a[i];
                flag = 1;
            }
        }
    }
    if (flag == 1) {
        printf("%d\n", second_order_statistic);
    } else {
        printf("NO\n");
    }
    return 0;
}
