/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problem 5: Find the largest number among three numbers
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    printf("Largest number: %d\n", largest);
    return 0;
}
