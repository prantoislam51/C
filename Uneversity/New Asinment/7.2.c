/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows for modified Floyd's triangle: ");
    scanf("%d", &rows);
    printf("Modified Floyd's triangle with %d rows:\n", rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0){
                printf("1");
                }
            else{
                printf("0");
                }
        }
    }
    return 0;
}
