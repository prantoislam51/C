


#include <stdio.h>
int main(){

int row = 10;
for (int i = 1; i <= row; i++)
{
    for (int m = 1; m <= row-i; m++){
        printf(" ");
    }

    for (int j = 1; j <= i; j++){
        printf("* ");
    }

    printf("\n");
    
}



}