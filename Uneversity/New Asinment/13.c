/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
int main() {
    int sum = 0;
    int count = 0;
    printf("Integers divisible by 6 but not by 4 between 0 and 100:\n");
    for (int i = 1; i <= 100; ++i) {
        if (i % 6 == 0 && i % 4 != 0) {
            printf("%d ", i);
            sum += i;
            count++;
        }
    }
    printf("\n\nSum of such integers: %d\n", sum);
    printf("Count of such integers: %d\n", count);
    return 0;
}
