

#include <stdio.h>
int main(){
    int row,col,array[100][100];
    printf("Inter The Row Number: ");
    scanf("%d",&row);
    printf("Inter The Col Number: ");
    scanf("%d",&col);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("array [%d] [%d] ",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }
}