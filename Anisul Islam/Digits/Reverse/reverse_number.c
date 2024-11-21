

#include <stdio.h>
int main(){
    int number, sum = 0, reminder;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0)
    {
        reminder = number % 10;
        sum = sum * 10 + reminder;
        number = number / 10;
    }
    printf("Reversed number is: %d", sum);
    


}