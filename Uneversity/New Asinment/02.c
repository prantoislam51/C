/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problemd No: 02 Write a program to determine whether a given number is 'odd' or 'aven' and print the message
// NUMBER IS EVEN or NUMBER IS ODD
// (b) with olso option.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // With using else option
    if (num % 2 == 0) {
        printf("NUMBER IS EVEN\n");
    } 
    else {
        printf("NUMBER IS ODD\n");
    }
    return 0;
}