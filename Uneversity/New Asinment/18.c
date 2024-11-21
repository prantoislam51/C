/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    if (a > b) {
        printf("a is greater than b\n");
    } 
    else if (b > a) {
        printf("b is greater than a\n");
    } 
    else {
        printf("a and b are equal\n");
    }
    return 0;
}
