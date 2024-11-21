







// #include <stdio.h>
// int main(){
//     int number = 9;

//     for (int i = 1; i <= number; i++)
//     {
//         for (int j = 1; j <= number; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
        
//     }
    
// }






#include <stdio.h>

int main(){

    int num = 10;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if( i == 1 || i == num || j == 1 || j == num){
                printf(" ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    


}












// #include <stdio.h>

// int main(){

//     int num = 10;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             if( i == 1 || i == num || j == 1 || j == num){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
    


// }