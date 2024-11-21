// #include <stdio.h>
// int main(){
//     // printf("Hellow world");
//     // return 0;



//     int x = 10;
//     printf("%i",x);
// };









// #include <stdio.h>
// int main(){
//     int x, y;
//     printf("Inter 2 number: ");
//     scanf("%d",&x);
//     scanf("%d",&y);
//     // int z = x + y; ---- Opshonal------
//     printf("Adition is %d",x+y);
//     return 0;
// };







// #include <stdio.h>
// int main(){
//     int a, b, c;
//     printf("Inter your First Number: ");
//     scanf("%d",&a);
//     printf("Inter your secound Number: ");
//     scanf("%d",&b);
//     printf("Inter your secound Number: ");
//     scanf("%d",&c);
//     int sum = a + b + c;
//     printf("Your total sum = %d",sum);
//     return 0;
// };










// ------------- Using Function ------------
// #include <stdio.h>

// int add(){
//     int a = 10;
//     int b = 20;
//     int c = 30;
//     printf("%d",a + b + c);
//     return 0;
// }

// int main() {
//     add();
//     return 0;
// }

// ---- Pass Paramiter ---- 

// #include <stdio.h>

// int add (int x, int y){
//     int sum = x + y;
//     printf("%d",sum);
//     return 0;
// }

// int main(){
//     add(10, 20);
//     return 0;
// }





// --------------------------------------------------
// --------------------------------------------------


//   Soild Map On function --------
// #include <stdio.h>
// int adds (b){
//     int a;
//     a = 10;
//     int soild = a * b;
//     return soild;

// }

// int main(){
//     int b;
//     printf("Inter Your Soild Mup: ");
//     scanf("%d",&b);
//     int total = adds(b); // Function Part Satup New Variable----
//     printf("%d", total);

//     return 0;
// }


// ------------------------------------------
// ------- Memoyr Address-------
// #include <stdio.h>
// int main(){
//     int x;
//     int y;
//     y = &x;
//     printf("%d",y);

//     return 0;
// }







// ------------------------------------------
// Condition --------- 
// ------------------------------------------
// #include <stdio.h>
// void main(){
//     int x;
//     printf("inter Your Age");
//     scanf("%d", &x);

//     if(x >= 18){
//         printf("Ok Done this is Ok You are Adult");
//     }
//     else{
//         printf("You are Not Adult");
//     }
// }
// ------------------------------------------
// ------------------------------------------


// #include <stdio.h>

// int main(){
//     int x;
//     int y;
//     int z;
//     x = 90;
//     if(x < 100 && x >= 90){
//         printf("Good Number: %d",x);
//     }
//     else{
//         printf("This number is not Good: %d", x);
//     }
//     return 0;
// }
// 
// ------------------------------------------
// ------------------------------------------
// --------- Event ODD
// #include <stdio.h>
// int main(){
//     int x = 9;
//     if(x % 2 == 0 ){
//         printf ("This number is Event : %d", x);
//     }
//     else{
//         printf("This number is Odd: %d", x);
//     }
//     return 0;
// }





// ------------------------------
// ------------------------------
// ------------------------------
//  I have 500 Tk
//  Alu Price 120 Tk Per KG
//  Chips 10 TK one Pice
//  7up 100 Tk One Botul
//  Bagun 100
//  Sim 150 Tk Per KG
//  Coklet 5 per pice
//  
//  Not Pad 30 Tk


// #include <stdio.h>
// int main (){

//     int my_account;
//     printf("Inter your account: ");
//     scanf("%d", &my_account);
//     printf("Your ammount Is %d\n", my_account);


//     //  Coklet Price and Quantity -
//     int coklet_Quantity;
//     printf("1 Pice coklet price is (5 TK). Input Your Coklet Quantity: ");
//     scanf("%d", &coklet_Quantity);
//     int total_coklet_price = coklet_Quantity * 5;


//    //  Chips Price and Quantity -
//     int chips_Quantity;
//     printf("1 Pice chips price is (10 TK). Input Your Coklet Quantity: ");
//     scanf("%d", &chips_Quantity);
//     int total_chips_price = coklet_Quantity * 5;


//     // Alu
//     int Alu_KG;
//     printf("1 KG Price (120 tk ). How muss kilo Do you want: ");
//     scanf("%d", &Alu_KG);
//     int Total_Alu_KG = Alu_KG * 120;


//     // 7 UP
//     int water_Quantity;
//     printf("1 Pice 7p price is (100 TK). Input Your Coklet Quantity: ");
//     scanf("%d", &water_Quantity);
//     int total_water_Quantity = water_Quantity * 100;


//     //  Sim
//     int sim_KG;
//     printf("1 KG Sim Price (150 tk ). How muss kilo Do you want: ");
//     scanf("%d", &sim_KG);
//     int total_sim_KG = sim_KG * 150;

//     printf("Coklet : %d\n",total_coklet_price);
//     printf("Alu_KG : %d\n",Total_Alu_KG);
//     printf("7 UP : %d\n",total_water_Quantity);
//     printf("Sim : %d\n",total_sim_KG);

//     int total_bazer = total_sim_KG + Total_Alu_KG + total_chips_price + total_coklet_price;

//     if(my_account > total_bazer){
//         int x = my_account - total_bazer;
//         int rest_money = 
//         printf("OK You are By\n");
//         printf("Total Cost: %d\n",total_bazer);
//         printf("Remaining money: %d",x);
//     }
//     else{
//         printf("Not have Not Enugh Money. You Have %d Taka. Your Bazzer is %d",my_account,total_bazer);
//     }

//     return 0;
// }

// 
// 
// 
// 
// 
// 
// 






// #include<stdio.h>
// int main()
// {
//    int age;
// printf("Enter age= ");
// scanf("%d",&age);
// if(age < 5)
// printf("BABY");
// else if(age > 4 && age < 13)
// printf("KID");
// else if(age > 12 && age < 20)
// printf("TEEN");
// else if(age>19 && age<40)
// printf("MIDLE AGE");
// else
// printf("OLD AGE");

// return 0;
// }

// ------------------------------------------
// ------------------------------------------
// ------------------------------------------
// ------------------------------------------

// Loop----------------------------
// Loop----------------------------
// Loop----------------------------
// Loop----------------------------
// Loop---------------------------- For ---------
// #include <stdio.h>
// int main(){
//     int x;
//     for (int x = 1; x < 101; x++)
//     {
//         printf("Hellow World : %d \n",x);
//     }
//     return 0;
    
// }
// Loop----------------------------
// Loop----------------------------
// Loop----------------------------
// Loop----------------------------
// Loop---------------------------- For ---------

// #include <stdio.h>
// int main(){
//     int x;
//     int y;
//     for (int x = 0; x < 10; x++)
//     {
//         printf("Santo Islam %d\n",x);

//         for (int y = 5; y < 5; y++)
//         {
//            printf("Hellow %d \n",y);
//         }
//     }
//     return 0;
    
// }


//


// Loop----------------------------
// Loop----------------------------
// Loop----------------------------
// Loop----------------------------
// Loop---------------------------- For ---------


// Loop----------------------------
// Loop----------------------------
// Loop----------------------------
// Loop----------------------------
// Loop---------------------------- For ---------


// Loop----------------------------
// Loop----------------------------
// Loop----------------------------
// Loop----------------------------
// Loop---------------------------- For ---------












// Arrsy----------------------------
// Arrsy----------------------------1
// Arrsy----------------------------
// Arrsy----------------------------
// Arrsy---------------------------- Arrsy ---------



// #include <stdio.h>
// int main (){
//     int a [5],i;
//     printf("Inter the Five Value: ");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//      for (int i = 0; i < 5; i++)
//     {
//         printf("Inter the %d /n Value: ",a[i]);
//     }
    

//     return 0;
// }



// Switch ---------------------------
// Switch ---------------------------
// Switch ---------------------------
// Switch ---------------------------
// Switch ---------------------------
// Switch ---------------------------
// Switch ---------------------------
// Switch ---------------------------
// Switch ---------------------------
// Switch ---------------------------

// #include <stdio.h>
// int main(){
//     char operator;
//     int x;
//     int y;
//     printf("Input The Oprator");
//     scanf("%c",&operator);
//     switch (operator)
//     {
//     case '+':
//         printf("Input First Number: ");
//         scanf("%d",&x);
//         printf("Input Secound Number: ");
//         scanf("%d",&y);
//         int sum = x + y;
//         printf("%d",sum);
//         break;
//     case '-':
//         printf("Input First Number: ");
//         scanf("%d",&x);
//         printf("Input Secound Number: ");
//         scanf("%d",&y);
//         int minus = x - y;
//         printf("%d",minus);
//         break;
//     case '*':
//         printf("Input First Number: ");
//         scanf("%d",&x);
//         printf("Input Secound Number: ");
//         scanf("%d",&y);
//         int multimalation = x * y;
//         printf("%d",multimalation);
//         break;
//     case '/':
//         printf("Input First Number: ");
//         scanf("%d",&x);
//         printf("Input Secound Number: ");
//         scanf("%d",&y);
//         int divide = x / y;
//         printf("%d",divide);
//         break;
    
//     default:
//         printf("Invilide .......");
//         break;
//     }

//     return 0;
// }



// While Loop ---------------------------
// While Loop ---------------------------
// While Loop ---------------------------
// While Loop ---------------------------
// While Loop ---------------------------
// While Loop ---------------------------

// #include <stdio.h>
// int main(){
//     while (1)
//     {
//     char operator;
//     int x;
//     int y;
//     printf("Input The Oprator: ");
//     scanf("%c",&operator);
//     switch (operator)
//     {
//     case '+':
//         printf("Input First Number: ");
//         scanf("%d",&x);
//         printf("Input Secound Number: ");
//         scanf("%d",&y);
//         int sum = x + y;
//         printf("%d\n",sum);
//         break;
//     case '-':
//         printf("Input First Number: ");
//         scanf("%d",&x);
//         printf("Input Secound Number: ");
//         scanf("%d",&y);
//         int minus = x - y;
//         printf("%d\n",minus);
//         break;
//     case '*':
//         printf("Input First Number: ");
//         scanf("%d",&x);
//         printf("Input Secound Number: ");
//         scanf("%d",&y);
//         int multimalation = x * y;
//         printf("%d\n",multimalation);
//         break;
//     case '/':
//         printf("Input First Number: ");
//         scanf("%d",&x);
//         printf("Input Secound Number: ");
//         scanf("%d",&y);
//         int divide = x / y;
//         printf("%d\n",divide);
//         break;
//     default:
//         printf("Invilide .......\n");
//         break;
//     }
// }
//     }
// 
// 
// 
// // 
// 
// 
// // // // 
// 
// 
// // 
// 
// 
// 

//  Arrsy can't use '-'... exam: int arr [-5]; --- this is not Right....array|
// Only Use Positive Array--- 

/*   Bast Pactice Declear the Array  --- 'Macro'
    #include <stdio.h>
    int main(){
        #define n 10;
        int array [n];
    }
*/
// #include <stdio.h>
// int main(){
//     int array[4],i; 
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Input The Number : %d",i);
//     }
// }



// #include <stdio.h>
// int main(){


//     int x [10] = {10,20,30,40,50,60,70,80,90,100};
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n",x[i]);
//     }
//     return 0;
// }






// #include <stdio.h>
// int main(){

//     int a[10];
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Inter Your Number: ");
//         scanf("%d",&a[0]);
//     }
// }




// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

//#include <stdio.h>
//
//int main() {
//
//  int array[5];
//
//  printf("Enter 5 integers: ");
//  for(int i = 0; i < 5; ++i) {
//     scanf("%d", &array[i]);
//  }
//
////   printf("Displaying integers: ");
//
//  for(int i = 0; i < 5; ++i) {
//     printf("%d\n", array[i]);
//  }
//  return 0;
//}






// Array Loop
// Array Loop
// Array Loop----------------------
// Array Loop----------------------
// Array Loop----------------------
// Array Loop----------------------
// Array Loop----------------------

// #include <stdio.h>
// int main(){
//     int x[6] = {10,20,30,40,50,60};
//     int sum = 0;
//     for (int i = 0; i < 6 ; i++)
//     {
//         sum = sum + x[i];
//         // printf("%d\n",sum);
//     }
//     printf("%d\n",sum);
//     return 0;
// }










// #include <stdio.h>
// int main (){
//     int array[100],number;
//     printf("Input the array value 1 to 99: ");
//     scanf("%d",&number);
//     for (int i = 0; i < number; i++)
//     {
//         scanf("%d",&array[i]);
//     }

//    int max = array[0];
//    for (int i = 1; i < number; i++)
//    {
//     if (max < array[i])
//     {
//         max = max + array[i];
//     }
//    }
//     printf("Max number is : %d",max);
//     return 0;
    
// }
















// #include <stdio.h>
// int main (){
//     int x[100],numbe;
//     printf("Input your range Value: ");
//     scanf("%d",&numbe);
//     for (int i = 0; i < numbe; i++)
//     {
//         scanf("%d",&x[i]);
//     } 
//     int max = x[0];
//     for (int i = 0; i < numbe; i++)
//     {
//         printf("Value Is : %d\n",x[i]);
//         if (max < x[i])
//         {
//             max =  x[i];
//         }
        
//         // printf("Value Is : %d\n",x[i]);
//     }
//     printf("Max Number Is: %d", max);  
// }













// /*
//     Name: Md.Pranto Ali
//     Id: 23303101
//     Sl: 12
// */
// #include <stdio.h>
// int main(){
//     // Print String
//     printf("Name: Md.Pranto Ali \nID: 23303101\nSerial: 12");
//     // Print Integer Number 
//     int number1 = 10;
//     printf("%d", number1);
//     // Print float Number 
//     float number2 = 10.55;
//     // Print a character
//     char word = 'A';
//     printf("%c",word);
//     // Print a long number
//     int longNumber = 21.564564654654;
//     printf("%lf",longNumber);
    
// }




// #include <stdio.h>
// int main(){
//     // My Details- String
//     printf("Name: Md.Pranto Ali \nID: 23303101\nSerial: 12\n\n");
//     // Problem Solve Section
//     int two_Pen = 10;
//     int two_Khata = 20;
//     int my_account = 100;
//     // Total Cost
//     int total_Cost = two_Pen + two_Khata;
//     // You give 100 taka to shopkeeper.  Find the returning amount from shopkeepe 
//     int returning_amount = my_account - total_Cost;
//     // Out Put 
//     printf("Your Returning Amount Is: %d",returning_amount);
// }



// #include <stdio.h>
// int main(){
//     // My Details- String
//     printf("Name: Md.Pranto Ali \nID: 23303101\nSerial: 12\n\n");
//     // Problem Solve Section
//     int first_number = 10;
//     int second_number = 23;
//     int third_number = 38;
//     int fourth_number = 15;
//     int fifth_number =  55;
//     // Total Number
//     int total_number = first_number + second_number + third_number + fourth_number + fifth_number;
//     // Average 
//     float average = total_number / 5;
//     printf("Average Is : %f",average);
// }



























