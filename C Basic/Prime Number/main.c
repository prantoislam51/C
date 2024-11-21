// Chack Prime Number
// #include <stdio.h>
// int main(){
//     // int x,y;
//     // printf("Enter the First value of x : ");
//     // scanf("%d",&x);
//     // printf("Enter the Second value of y : ");
//     // scanf("%d",&y);
//     int count = 0;
    
    
//     int x = 10;
//     for(int i = 2; i < x; i++){
//             if(x % i == 0){
//                 count ++;
//                 break;
//             }
//     }
//     if(count == 0){
//     printf("Number is Priem");
//     }
//     else{
//         printf("Number is not Priem");
//     }
    
// }




// Sum Of Prime Number--

#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the First value of x : ");
    scanf("%d",&x);
    printf("Enter the Second value of y : ");
    scanf("%d",&y);
    int count = 0;
    for (int i = x; i <= y; i++){
        for (int j = i; j <= y; j++){
            if (i % j != 0)
            {
                count ++;
                break;
            }
            printf("%d\n",i);
        }
    }
    printf("The number of divisors of %d is %d",x,count);
    
}