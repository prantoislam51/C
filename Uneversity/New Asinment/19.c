/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
int main() {
    float percentage;
    printf("Enter the total percentage of marks: ");
    scanf("%f", &percentage);
    if (percentage >= 80.0) {
        printf("Division: First Division\n");
    } 
    else if (percentage >= 60.0 && percentage < 80.0) {
        printf("Division: Second Division\n");
    } 
    else {
        printf("Division: Third Division\n");
    }
    return 0;
}
