/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
int main() {
    int rows, num = 1, count = 0;
    printf("Enter the number of rows for Floyd's triangle: ");
    scanf("%d", &rows);

    printf("Floyd's triangle with %d rows:\n", rows);
    for (int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
            count++;
            if(count == i) {
                printf("\n");
                count = 0;
            }
        }
    }
    return 0;
}
