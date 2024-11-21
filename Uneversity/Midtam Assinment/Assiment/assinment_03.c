/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problem 3: Calculate the factorial of User Interface
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d: %d\n", n, factorial);
    return 0;
}
