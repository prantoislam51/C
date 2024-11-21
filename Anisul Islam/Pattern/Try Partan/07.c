



#include <stdio.h>
int main(){
    int number = 9;

    for (int i = 1; i <= number; i++)
    {

        for (int k = 1; k <= number - i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}