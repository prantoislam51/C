


#include <stdio.h>
int main(){
    int x;
    printf("Inter the Value: ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++){ // Row Print
        for (int j = 0; j < i; j++){ //Calam Print
            printf("%d",j);
        }
        printf("\n");
    }
}