// find out the largest number
// #include <stdio.h>
// int main(){
//     int num1 = 16, num2 = 150, num3 = 3;
//     if (num1 > num2){
//         if(num1 > num3 ){
//             printf("The Bigest Number is: %d\n",num1);
//         }
//         else{
//             printf("The Bigest number Is: %d",num3);
//         }
//     }
//     else{
//         if (num2 > num3){
//         printf("The Bigest Number is: %d\n",num2);
//         }
//         else{
//             printf("The Bigest Number is: %d",num3);
//         }
//     }
// }




// find out the smaller number
// 
#include <stdio.h>
int main(){

    int num1, num2 , num3;
    printf("Input The 3 Number: ");
    scanf("%d%d%d",&num1, &num2, &num3);
    if (num1 < num2){
        if(num1 < num3 ){
            printf("The Smaller Number is: %d\n",num1);
        }
        else{
            printf("The Bigest number Is: %d",num3);
        }
    }
    else{
        if (num2 > num3){
        printf("The Bigest Number is: %d\n",num2);
        }
        else{
            printf("The Bigest Number is: %d",num3);
        }
    }
}