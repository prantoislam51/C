

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    // Input
    char word[101]; // Assuming the maximum length of word is 100 characters
    scanf("%s", word);

    int length = strlen(word);

    int allUpperExceptFirst = 1;
    int allUpper = 1;
    for(int i = 1; i < length; i++) {
        if(islower(word[i])) {
            allUpperExceptFirst = 0;
            break;
        }
    }
    for(int i = 0; i < length; i++) {
        if(islower(word[i])) {
            allUpper = 0;
            break;
        }
    }
    if(allUpper) {
        for(int i = 0; i < length; i++) {
            word[i] = tolower(word[i]);
        }
        printf("%s\n", word);
        return 0;
    }
    if(allUpperExceptFirst) {
        for(int i = 1; i < length; i++) {
            word[i] = tolower(word[i]);
        }
        if(islower(word[0])) {
            word[0] = toupper(word[0]);
        }
    }
    printf("%s\n", word);
    return 0;
}
