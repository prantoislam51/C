







// Space-------  - - - -- - - - -  



#include <stdio.h>
int main(){

    int number;
    printf("Inter The amount Of Star: ");
    scanf("%d",&number);
    for(int i = 1; i <= number; i++){

        for (int j = 1; j <= number - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" *  ");
        }
        
        printf("\n");
    }

    for(int i = number-1; i >= 1; i--){

        for (int j = 1; j <= number - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" *  ");
        }
        
        printf("\n");

    }


}