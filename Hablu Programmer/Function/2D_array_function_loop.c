




#include <stdio.h>

void arr(int num[2][2]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("/nYour Martix %d", num[i][j]);
        };
    };
};

int main(){
    // int row , col;
    // printf("Inter The Row Number: ");
    // scanf("%d", &row);
    // printf("Inter The Column Number: ");
    // scanf("%d", &col);
    int y[2][2];
    for(int i = 0; i < 2; i++){
        for (int j = 0; j< 2; j++){
            printf("Inter the Value: [%d][%d] ", i,j);
            scanf("%d", &y[i][j]);
        };
    };
    arr(y[2][2]);
    
}