

#include <stdio.h>
#include <string.h>
struct mobile{
        char name[20];
        char processor[10];
        int price;
        int ram;
    };
int main() {
    struct mobile samsung;
    strcpy(samsung.name, "A"); // Assign a string to samsung.name
    printf("%c", samsung.name[0]); // Print the first character of the array
    return 0;
}



