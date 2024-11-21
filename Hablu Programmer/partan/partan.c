

#include <stdio.h>
int main(){
    int number = 10,store;
    // Part One
    for(int i = 0; i <= number; i++){
        for (int j = number; j >= i; j--){
            printf("*");
        }
        
        printf("\n");
        }
        // Part Two
        for(int i = 0; i <= number; i++){
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
        }
}

// Output
/*
***********
**********
*********
********
*******
******
*****
****
***
**
*
*
**
***
****
*****
******
*******
********
*********
**********
***********
*/