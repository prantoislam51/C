// 37 C Programming Palindrome Number Bangla Tutorial
#include <stdio.h>
int main(){
    int number, stor = 0, reminder;
    printf("Inter The Number: ");
    scanf("%d",&number);
    while (number != 0)
    {
        reminder = number % 10;
        stor = stor * 10 + reminder;
        number = number / 10;
    }
    printf("%d",stor);
    
    
}
