

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int terms = 10;
    int i;

    printf("Fibonacci sequence:\n");
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
