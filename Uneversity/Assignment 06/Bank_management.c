



#include <stdio.h>

int main(){
    int balence = 0;
    int cashIn_balence;
    int cash_Out_Amount;
    again:
    printf("\nWelcome to ATM\n");
    printf("What do you want Cash out type 'o' or Cash in type 'i' : ");
    char cash_Out_or_Cash_in;
    scanf("%c", &cash_Out_or_Cash_in);
    // Cash in section
    if (cash_Out_or_Cash_in == 'i')
    {
        printf("Enter your cash in amount: ");
        scanf("%d", &cashIn_balence);
        balence = balence + cashIn_balence;
        printf("Your new balence is %d", balence);
        goto again;
    }
// Cash Out Section
    else if (cash_Out_or_Cash_in == 'o')
    {
        printf("Enter your cash out amount: ");
        scanf("%d", &cash_Out_Amount);
        if (balence > cash_Out_Amount)
        {
            balence = balence - cash_Out_Amount;
            printf("Your new balence is %d", balence);
        }
        else{
            printf("Your Balence Is not Enf amount: ");
        }
        goto again;
    }

    else{
        printf("You have entered wrong input");
        goto again;
    }
}