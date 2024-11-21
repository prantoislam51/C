

#include <stdio.h>
int main(){

    int row = 6;

    for (int i = 1; i < row; i++){
        for (int j = 1; j <= i; j++){
            printf(" *");
        }
        printf("\n");
    }

    for (int i = row; i > 0; i--){
        for (int j = 1; j <= i; j++){
            printf(" *");
        }
        printf("\n");
    }

    

}

