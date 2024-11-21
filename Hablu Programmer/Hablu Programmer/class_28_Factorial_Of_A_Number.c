

// 28 C Programming Factorial Of A Number Bangla Tutorial

#include <stdio.h>

int main()
{
    int x, total = 1;
    printf("inter a number Do you want Factrial Number: ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        total = total * i;
    }
    printf("Factorial of %d is %d", x, total);
}