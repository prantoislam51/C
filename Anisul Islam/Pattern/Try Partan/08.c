#include <stdio.h>
int main(){
    int number = 9;


    for (int i = 1; i <= number; i++)
    {

        for (int k = 1; k <= number - i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = number-1; i >= 1; i--)
    {

        for (int k = 1; k <= number - i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}





















// #include <stdio.h>
// int main(){
//     int number = 8;
//     for (int i = 1; i < number; i++)
//     {
//         for (int j = 1; j < number; j++)
//         {
//             if (j == 1 || j == number -1 || i == j)
//             {
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
            
//         }
//         printf("\n");
//     }
    
// }