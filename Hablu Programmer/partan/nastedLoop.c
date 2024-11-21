


#include <stdio.h>
int main(){
    int x;
    printf("Inter the Number: ");
    scanf("%d",&x);
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}