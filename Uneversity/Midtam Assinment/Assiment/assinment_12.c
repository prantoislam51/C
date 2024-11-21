/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problem 12: Convert Fahrenheit to Celsius
#include <stdio.h>
int main() {
    float fahrenheit, celsius;
    // Prompt the user to enter temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;
    // Display the temperature in Celsius
    printf("Temperature in Celsius: %.2f\n", celsius);
    return 0;
}
