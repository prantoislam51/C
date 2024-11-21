
// convert lowercase to uppercase letter
// #include <stdio.h>
// int main(){
//     char lower_Case;
//     printf("Inter The Any Lower Case Latter: ");
//     scanf("%c", &lower_Case);
//     printf("Your Lower Case Latter Is: %c\n",lower_Case);


//     printf("Your Upper Case Latter Is: %c",lower_Case - 32);
// }







/* 
The ASCII value of the lowercase alphabet is from 97 to 122
ASCII value কি ভ্যালু এর মধ্যে পার্থক্য ৩২
ASCII value of the uppercase alphabet is from 65 to 90.
*/







// convert uppercase to lowercase letter

// #include <stdio.h>
// int main(){
//     char Upper_Case;
//     printf("Inter The Any Upper Case Latter: ");
//     scanf("%c", &Upper_Case);
//     printf("Your Lower Upper Latter Is: %c\n",Upper_Case);


//     printf("Your Lower Case Latter Is: %c",Upper_Case + 32);
// }




// Using Liberary Lower to Upper

// #include <ctype.h>
// #include <stdio.h>
// int main() {
//     char lower_case, upper_case;
//     printf("Enter any lowercase letter: ");
//     scanf(" %c", &lower_case); // Note the space before %c to consume any whitespace characters including newline
//     printf("Your lowercase letter is: %c\n", lower_case);

//     upper_case = toupper(lower_case);
//     printf("Your uppercase letter is: %c\n", upper_case);

//     return 0;
// }








// Using Liberary Upper to Lower


#include <ctype.h>
#include <stdio.h>
int main(){
    char big_letter, small_letter;
    printf("Inter Bigest Number: ");
    scanf("%c",&big_letter);

    small_letter = tolower(big_letter);
    printf("Your Letter Is:  %c",small_letter);

}
