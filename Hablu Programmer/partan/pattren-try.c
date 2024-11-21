

#include <stdio.h>
int main(){
    int number;
    printf("Inter The Number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++){
        for (int j = 1; j <= i; j++){
            printf(" *");
        }
        printf("\n");
        
    }
    
}
/*
 *
 * *
 * * *
 * * * *
 * * * * *
*/




// #include <stdio.h>
// int main(){
//     int number;
//     printf("Inter The Number: ");
//     scanf("%d", &number);
//     for (int i = 1; i <= number; i++){
//         for (int k = 1; k <= number - 1; k++)
//         {
//             printf("  ");
//         }    
//         for (int j = number; j >= i; j--){
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
         * * * * *
         * * * *
         * * *
         * *
         *
*/












// #include <stdio.h>
// int main(){
//     int number = 10;
//     for (int i = 1; i <= number; i++){
//         for (int k = number; k >= number; k--)
//         {
//             printf("  ");
//         }
//         for (int j = number; j >= i; j--){
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;

// }