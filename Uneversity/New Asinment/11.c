/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
int main() {
    int side1, side2, side3;
    printf("Enter three integer values: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 * side1 == side2 * side2 + side3 * side3 ||
        side2 * side2 == side1 * side1 + side3 * side3 ||
        side3 * side3 == side1 * side1 + side2 * side2) {
        printf("The entered values can form right-angled triangle.\n");
    } else {
        printf("The entered values cannot form right-angled triangle.\n");
    }
    return 0;
}
