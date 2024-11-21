

#include <stdio.h>
#include <ctype.h>

int main() {
    char inputText[101];
    scanf("%s", inputText);
    char outputText[201];
    for (int i = 0; inputText[i] != '\0'; i++) {
        inputText[i] = tolower(inputText[i]);
    }
    int outputIndex = 0;
    for(int i = 0; inputText[i] != '\0'; i++) {
        if(inputText[i] == 'a' || inputText[i] == 'o' || inputText[i] == 'y' || inputText[i] == 'e' || inputText[i] == 'u' || inputText[i] == 'i') {
            continue;
        }
        outputText[outputIndex++] = '.';
        outputText[outputIndex++] = inputText[i];
    }
    outputText[outputIndex] = '\0';
    printf("%s\n", outputText);

    return 0;
}
