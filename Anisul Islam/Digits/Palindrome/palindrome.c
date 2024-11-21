

#include <stdio.h>
int main(){
    int number, sum = 0, rivers_number;

    printf("Inter A Number: ");
    scanf("%d",&number);
    int temp = number;
    while (number != 0)
    {
        rivers_number = number % 10;
        sum = sum * 10 + rivers_number;
        number = number / 10;
    }
    printf("Sum Of the number = %d\n",sum);
    if (temp == sum)
    {
        printf("This Number Is Palindrome = %d\n",temp);
    }
    else{
        printf("This Number Is Not Palindrome = %d\n",temp);
    }
    
    


}





// printf("%d\n",sum);
//     if (number == sum)
//     {
//         printf("This Number Is Palindrome = %d",number);
//     }
//     else{
//         printf("This Number Is Not Palindrome = %d",number);
//     };