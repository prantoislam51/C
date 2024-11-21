



#include <stdio.h>
int main(){


for (int m = 0; m < 100; m++)
{


    int row = 6;

    for (int i = row; i > 0; i--){
        for (int j = 1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }

    for (int i = 1; i < row; i++){
        for (int j = 1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }

}
}