/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
int main() {
    int x;
    int y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    if (x < 0) {
        y = 1;
    } 
    else if (x == 0) {
        y = 0;
    } 
    else {
        y = -1;
    }
    printf("The value of y for x = %d is: %d\n", x, y);
    return 0;
}
