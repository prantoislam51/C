/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
#include <math.h>
int main() {
    printf("Square Root Table:\n");
    printf("  x  |  0.0  0.1  0.2  0.3  0.4  0.5  0.6  0.7  0.8  0.9\n");
    printf("Print------ \n");
    for (int i = 0; i < 10; ++i) {
        printf("  %d  | ", i);
        for (int j = 0; j < 10; ++j) {
            double num = i + (double)j / 10;
            printf("%.2f ", sqrt(num));
        }
        printf("\n");
    }
    return 0;
}