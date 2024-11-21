/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problem 14: Write a program to determine the type of triangle based on its angles.
#include <stdio.h>
int main() {
    int angle1, angle2, angle3;
    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if (angle1 + angle2 + angle3 == 180) {
        if (angle1 == angle2 && angle2 == angle3) {
            printf("Equilateral triangle.\n");
            } 
        else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
            printf("Isosceles triangle.\n");
            } 
        else {
            printf("Scalene triangle.\n");
        }
    } 
    else 
        {
        printf("Not a valid triangle.\n");
        }
    return 0;
}
