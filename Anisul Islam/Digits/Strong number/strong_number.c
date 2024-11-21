


#include <stdio.h>
int main(){

    int number, sum = 0, rimender;
    printf("Enter a number: ");
    scanf("%d", &number);
    int temp = number;

    while (number != 0)
    {
        rimender = number % 10;
        int fac = 1;
        for (int i = 1; i <= rimender; i++)
        {
            fac = fac * i;
        }
        printf(" Fac ==== %d\n",fac);
        sum = sum + fac;
        number = number / 10;
        
    }
    if (temp == sum)
    {
        printf("%d Is a Strong Number ",temp);
    }
    
    
    
}