/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
#include <math.h>
int main() {
    double x, result;
    char T;
    printf("Enter the angle in radians: ");
    scanf("%lf", &x);
    printf("Enter the type of trigonometric function (s/c/t): ");
    scanf(" %c", &T);
    switch (T) {
        case 's':
        case 'S':
            result = sin(x);
            printf("sin(%.2lf) = %.4lf\n", x, result);
            break;
        case 'c':
        case 'C':
            result = cos(x);
            printf("cos(%.2lf) = %.4lf\n", x, result);
            break;
        case 't':
        case 'T':
            result = tan(x);
            printf("tan(%.2lf) = %.4lf\n", x, result);
            break;
        default:
            printf("Invalid trigonometric function type.\n");
    }
    return 0;
}
