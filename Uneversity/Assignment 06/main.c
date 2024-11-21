#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "abcd";
    char str2[] = "cdab";
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    // Check if lengths of both strings are equal
    if (len1 != len2) {
        printf("\"%s\" is not a rotation of \"%s\".\n", str2, str1);
        return 0;
    }
    // Concatenate str1 with itself
    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);
    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("\"%s\" is a rotation of \"%s\".\n", str2, str1);
    else
        printf("\"%s\" is not a rotation of \"%s\".\n", str2, str1);

    return 0;
}
