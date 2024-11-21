// 32 C Programming Find GCD Of Two Numbers Bangla Tutorial


// #include <stdio.h>
// int main(){
//     int x,y,stor;
//     printf("Inter the Number: ");
//     scanf("%d",&x);
//     for (int i = 1; i <= x; i++)
//     {
//         // printf("%d \n",i);
//         if (x % i == 0)
//         {
//             printf("%d\n",i);
//         }   
//     }   
// }





#include <stdio.h>
int main(){
    int x,y,stor;
    printf("Inter the Number: ");
    scanf("%d",&x);
    printf("Inter the Secound Number: ");
    scanf("%d",&y);
    for (int i = 1; i <= x && i <= y; i++)
    {
        // printf("%d \n",i);
        if (x % i == 0 && y % i == 0)
        {
            printf("%d\n",i);
            stor = i;
        }   
    } 
    printf("Bigest number is:%d\n",stor);
}



