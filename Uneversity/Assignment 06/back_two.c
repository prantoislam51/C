#include <stdio.h>
// Cash in section----
void cash_in_function(int *a){
    int ammount;
        printf("Enter your cash in amount: ");
        scanf("%d", &ammount);
        *a = *a + ammount;
        printf("Your new balence is %d\n", *a);
};

// Cash Out Section--------
void cash_out_function(int *a){
    int cash_Out_Amount;
        printf("Enter your cash out amount: ");
        scanf("%d", &cash_Out_Amount);
        if (*a > cash_Out_Amount){
            *a = *a - cash_Out_Amount;
            printf("Your new balence is %d\n", *a);
        }
        else{
            printf("Your Balence Is not Enf amount: \n");
        }
};
int main(){    
    int i = 1;
    int balence = 30;
    char cash_Out_or_Cash_in;
    printf("\nWelcome to ATM\n");
    
    do{
    printf("What do you want Cash out type 'o' or Cash in type 'i' : ");
    scanf("%c", &cash_Out_or_Cash_in);
    // Cash in section
    if (cash_Out_or_Cash_in == 'i'){
        cash_in_function(&balence);
    }
// Cash Out Section
    if (cash_Out_or_Cash_in == 'o'){
        cash_out_function(&balence);
    }
    }
    while (i == 1);
}