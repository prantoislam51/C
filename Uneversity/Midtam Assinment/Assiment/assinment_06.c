/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problem 6: Write a program to check if a number is even or odd.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}
