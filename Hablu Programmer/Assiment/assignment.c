
/* 
Name: Md.Pranto Ali
ID: 23303101
Sl: 12
*/
// 

// #include <stdio.h>
// int main() {
//     int days, years, months, remaining_days;
//     printf("Enter the number of days: ");
//     scanf("%d", &days);
//     years = days / 365;
//     remaining_days = days % 365;
//     months = remaining_days / 30;
//     remaining_days = remaining_days % 30;
//     printf("Years: %d\n", years);
//     printf("Months: %d\n", months);
//     printf("Days: %d\n", remaining_days);

//     return 0;
// }





// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num > 0) {
//         printf("The number is positive.\n");
//     } else if (num < 0) {
//         printf("The number is negative.\n");
//     } else {
//         printf("The number is zero.\n");
//     }
//     return 0;
// }






// #include <stdio.h>
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     year % 4 == 0 ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);
// }







// #include<stdio.h>

// int main()
// {
//     int marks;
//     printf ("Enter the marks:");
//     scanf ("%d", &marks);
//     if (marks >100 )
//     {
//         printf ("Given marks exceeding your 100 marks limit");
//     }
//     if (marks >=90 && marks <= 100)
//     {
//         printf ("Grade A");
//     }
//     else if (marks >=87 && marks <= 89)
//     {
//         printf ("Grade B+");
//     }
//     else if (marks >=84 && marks <= 86)
//     {
//         printf ("Grade B");
//     }
//     else if (marks >=80 && marks <= 83)
//     {
//         printf ("Grade B-");
//     }
//     else if (marks >=77 && marks <= 79)
//     {
//         printf ("Grade C+");
//     }
//     else if (marks >=74 && marks <= 76)
//     {
//         printf ("Grade C");
//     }
//     else if (marks >=70 && marks <= 73)
//     {
//         printf ("Grade C-");
//     }
//     else if (marks >=67 && marks <= 69)
//     {
//         printf ("Grade D+");
//     }
//     else if (marks >=64 && marks <= 66)
//     {
//         printf ("Grade D");
//     }
//     else if (marks >=60 && marks <= 63)
//     {
//         printf ("Grade D-");
//     }
//     else
//     {
//         printf ("Fail");
//     }
//     return 0;
// }







// #include <stdio.h>

// int main() {
//     int num1, num2;
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);
//     if (num2 != 0 && num1 % num2 == 0) {
//         printf("%d is divisible by %d.\n", num1, num2);
//     } else {
//         printf("%d is not divisible by %d.\n", num1, num2);
//     }
//     return 0;
// }












// Conconent and Vowle Letter chack
// #include <stdio.h>
// int main(){
//     char x;
//     printf("Inter a Letter: ");
//     scanf("%c",&x);
//     if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x =='u'||
//        x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
//         printf("%c is a Vowel \n",x);
//     }
//     else{
//         printf("%c is not a Vowel this is Consonent\n",x);
//     }
// }






// Bigger Number
// #include <stdio.h>
// int main(){
//     int x,y,z;
//     printf("Inter the Three Numbers: ");
//     scanf("%d%d%d",&x,&y,&z);

//     if (x > y)
//     {
//         if (x > z)
//         {
//             printf("%d is the biggest Number",x);
//         }
//         else{
//             printf("%d is the biggest Number",z);
//         }
//     }
//     else{
//         if (y > z){
//             printf("%d is the Bigger Number",y);
//         }
//         else{
//             printf("%d Is the Bigger Number",z);
//         }    
//     }
    
// }








// Uppercase and Lowercase
// #include <stdio.h>
// int main(){
//     char x;
//     printf("Inter the Letter: ");
//     scanf("%c",&x);
//     if(x >= 'a' && x <= 'w'){
//         printf("%c This letter is Lowercase:",x);
//     }
//     else if(x >= 'A' && x <= 'W'){
//         printf("%c This is a Uppercase Letter",x);
//     }
//     else{
//         printf("Inter the Letter: ");
//     }
// }






