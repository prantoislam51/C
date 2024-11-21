





#include <stdio.h>
int main(){

    int number = 9;
    for (int row = number; row >= 1; row--){
        
        for (int call = 1; call <= 2 * (number - row); call++){
            printf(" ");
        }
        

        for (int j = 0; j < row; j++)
        {
            printf( " *");
        }
        
        printf("\n");


    }
    
}