#include <stdio.h>



int array(int x, int y){
    printf("%d %d",x,y);
    int full_array [x][y];
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            printf("Inter the Value [%d][ %d]: ",i,j);
            scanf("%d",&full_array[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            printf("%d",full_array[i][j]);
        }
    }
    return 0;
}

int main(){
    int x;
    int y;
    printf("Inter the Row number: ");
    scanf("%d", &x);
    printf("Iner the Col number: ");
    scanf("%d",&y);
    array(x,y);
}




