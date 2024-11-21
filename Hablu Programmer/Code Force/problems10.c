#include <stdio.h>

int main() {
    char s[100001];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; ) {
        if (s[i] == '.') {
            printf("0");
            i++;
        } else if (s[i] == '-' && s[i + 1] == '.') {
            printf("1");
            i += 2;
        } else if (s[i] == '-' && s[i + 1] == '-') {
            printf("2");
            i += 2;
        }
    }

    return 0;
}
