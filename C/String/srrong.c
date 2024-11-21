





// #include <stdio.h>
// int main(){
//     int number = 10, count = 0;
//     int num = 0;
    

//     for (int i = 2; i < number; i++)
//     {
//         if (number % i == 0)
//         {
//             count ++;
//             break;
//         }
//         else{
//             num = i;
//         }
//     }
//     if (count == 0){
//         printf("This Is Prime Number: %d",number);
//     }
//     else{
//         printf("%d This Is not Prime Number",number);
//     }
// }










// #include <stdio.h>
// int main(){
//     int number = 10;
//     int num = 0;
    
//     for (int num = 1; num < 100; num++){
//         int count = 0;

//         if (num <= 1)
//         {
//             count ++;
//         }
        
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             count ++;
//             break;
//         }
//     }
//     if (count == 0){
//         printf("This Is Prime Number: %d\n",num);
//     }
//     }
// }









// Factoril Number -----
// #include <stdio.h>
// int main(){

//     int number = 5;

//     int sum = 1;
//     for (int i = 1; i < number; i++)
//     {
//         printf("%d\n",i);
//         sum = sum * i;
//     }
//     printf("%d Factoril = %d\n",number,sum);
    
// }




// Fibonakhi --- NUmber
// #include <stdio.h>
// int main(){
//     int number = 10;
//     int first = 0;
//     int second = 1;
//     int third;
//     printf("%d \n%d\n",first,second);
//     for (int i = 2; i < number; i++)
//     {
//         third = first + second;
//         printf("%d \n",third);
//         first = second;
//         second = third;
//     }
// }




// Revarch Number --- And palindrome Chack

// #include <stdio.h>
// int main(){
//     int number = 101,reminder,sum = 0;
//     int temp = number;
//     printf("Number = %d\n",number);
//     while (number != 0){
//         reminder = number % 10;
//         sum = (sum * 10) + reminder;
//         number = number / 10;
//     }
//     if (sum == temp)
//     {
//         printf("%d This Is a Palindrome Number",temp);
//     }
//     else{
//         printf("%d Is not Palindrome Number",temp);
//     }
    
// }







// GLD
// #include <stdio.h>
// int main(){
//     int number_One = 10;
//     int number_Two = 15;
//     int temp_one = number_One;
//     int temp_two = number_Two;
//     int reminder;

//     while (number_Two != 0)
//     {
//         reminder = number_One % number_Two;
//         number_One = number_Two;
//         number_Two = reminder;
//     }
//     printf("%d\n",number_One);

//     int lcg = temp_one * temp_two / number_One;
//     printf("LcD = %d ",lcg);
    
// }



// Sum of Disite
// #include <stdio.h>
// int main(){
//     int desite = 123;
//     int reminder, sum = 0;
//     while (desite != 0)
//     {
//         reminder = desite % 10;
//         sum = sum + reminder;
//         desite = desite / 10;
//     }
//     printf("%d\n",sum);
// }

// #include <stdio.h>
// int main(){

// }



























