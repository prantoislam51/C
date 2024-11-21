#include <stdio.h>

int isTriangular(int num) {
    if (num < 0)
        return 0;
    int sum = 0;
    for (int n = 1; sum <= num; n++) {
        sum = sum + n;
        if (sum == num)
            return 1;
    }
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    if (isTriangular(n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}



