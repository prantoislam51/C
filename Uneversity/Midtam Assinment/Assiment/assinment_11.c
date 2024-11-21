/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problem 11: Convert Celsius to Fahrenheit
#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    // Prompt the user to enter temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
    // Display the temperature in Fahrenheit
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
