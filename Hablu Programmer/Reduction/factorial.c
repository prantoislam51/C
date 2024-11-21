


#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

int main() {
    int number = 5;

    printf("The factorial of %d is %d\n", number, factorial(number));

    return 0;
}
