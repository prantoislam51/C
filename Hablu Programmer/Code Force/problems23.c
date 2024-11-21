

#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    int x = 0;
    while (n) {
        char statement[4];
        scanf("%s", statement);

        if (strcmp(statement, "X++") == 0 || strcmp(statement, "++X") == 0) {
            x++;
        } else if (strcmp(statement, "X--") == 0 || strcmp(statement, "--X") == 0) {
            x--;
        }

        n--;
    }
    printf("%d\n", x);
    return 0;
}
