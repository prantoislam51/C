/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problem 10: Write a program to check Day..
#include <stdio.h>
int main() {
    int number;
    // Input the number
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &number);
    // Check and display the day corresponding to the number
    if (number == 1) {
        printf("Sunday\n");
    } 
    else if (number == 2) {
        printf("Monday\n");
        } 
    else if (number == 3) {
        printf("Tuesday\n");
        } 
    else if (number == 4) {
        printf("Wednesday\n");
        } 
    else if (number == 5) {
        printf("Thursday\n");
        } 
    else if (number == 6) {
        printf("Friday\n");
        } 
    else if (number == 7) {
        printf("Saturday\n");
        } 
    else {
        printf("Invalid number!\n");
    }
    return 0;
}
