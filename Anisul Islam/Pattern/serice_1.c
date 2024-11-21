



/*

1
12
123
1234
12345

*/



// #include <stdio.h>
// int main(){

//     int row;
//     printf("Enter the number of rows: ");
//     scanf("%d", &row);
//     // int col;
//     // printf("Enter the number of columns: ");
//     // scanf("%d", &col);
//     for (int i = 1; i <= row; i++){
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }






#include <stdio.h>
int main(){

    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    // int col;
    // printf("Enter the number of columns: ");
    // scanf("%d", &col);
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
}






