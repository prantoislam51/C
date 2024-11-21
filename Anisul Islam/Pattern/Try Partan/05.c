






#include <stdio.h>
int main(){
    int number = 8;

    for (int r = 0; r < number; r++){

        for (int j = 0; j < number-r; j++){
            printf(" ");
        }
        
        for (int k = 0; k <= r; k++)
        {
            printf("%c",k+65);
        }
        printf("\n");
    }
    
}