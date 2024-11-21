#include <stdio.h>
int main(){
    int number = 105,reminder,sum = 0;
    printf("Number = %d\n",number);
    while (number != 0){
        reminder = number % 10;
        sum = (sum * 10) + reminder;
        number = number / 10;
    }
    printf("Reverch = %d\n",sum);
}