
#include <stdio.h>
int main(){
    int a[2][9] = {{10,20,30,40,50,60,70,80,99},
                   {52,15,25,35,45,55,65,75,85}};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d \n", a[i][j]);
        }
    }
};
