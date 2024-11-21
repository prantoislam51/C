/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problem 9: Write a program to check if a number is positive, negative, or zero.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("Number is zero.\n");
    }
    return 0;
}
