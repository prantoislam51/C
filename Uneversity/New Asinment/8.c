/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
int main() {
    float purchase_amount, discount_rate, net_amount;
    char item_type;
    printf("Enter the purchase amount: ");
    scanf("%f", &purchase_amount);
    printf("Enter the type of item (M for Mill cloth, H for Handloom): ");
    scanf(" %c", &item_type);
    switch (item_type) {
        case 'M':
        case 'm':
            if (purchase_amount >= 0 && purchase_amount <= 100)
                discount_rate = 0.0;
            else if (purchase_amount <= 200)
                discount_rate = 0.05;
            else if (purchase_amount <= 300)
                discount_rate = 0.075;
            else
                discount_rate = 0.10;
            break;
        case 'H':
        case 'h':
            if (purchase_amount >= 0 && purchase_amount <= 100)
                discount_rate = 0.05;
            else if (purchase_amount <= 200)
                discount_rate = 0.075;
            else if (purchase_amount <= 300)
                discount_rate = 0.10;
            else
                discount_rate = 0.15;
            break;
        default:
            printf("Invalid item type.\n");
            return 1;
    }
    net_amount = purchase_amount - (purchase_amount * discount_rate);
    printf("Net amount to be paid: $%.2f\n", net_amount);
    return 0;
}
