/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
#include <string.h>
int main() {
    char name[50];
    int units;
    float charges, total_amount;
    printf("Enter the name of the user: ");
    scanf("%[^\n]", name);
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 200) {
        charges = units * 0.80;
    } 
    else if (units <= 300) {
        charges = 200 * 0.80 + (units - 200) * 0.90;
    } 
    else {
        charges = 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;
    }
    charges += 100;
    if (charges > 400) {
        charges += charges * 0.15;
    }
    printf("\nName: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Charges: Rs. %.2f\n", charges);
    return 0;
}
