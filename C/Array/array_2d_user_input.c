
// #include <stdio.h>
// int main(){
//     int x,y;
//     printf("Inter 2D array ROW Number: ");
//     scanf("%d",&x);
//     printf("Inter 2D array COL Number: ");
//     scanf("%d",&y);
//     int a[x][y];
// }

#include <stdio.h>
int main(){
    int x [2][3] = {{1,2,3},
                   {4,5,6}};
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 3; j++){
              printf("Your array %d \n",x[i][j]);  
            };
        }
}
    
