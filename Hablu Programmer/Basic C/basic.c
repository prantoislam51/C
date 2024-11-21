
// #include <stdio.h>
// int main(){
//     int a;
//     float b;
//     double c;
//     char car;
//     printf("Input first Intger Number , second Float Number , third Double Number , fourth Char :");
//     scanf("%d%f%lf %c",&a,&b,&c,&car);
//     printf("All Output Is: %d , %f , %lf, %c",a,b,c,car);
// }

// #include <stdio.h>
// int main(){
//     int x,y,z;
//     printf("Input The First Bigest Number: ");
//     scanf("%d",&x);
//     printf("Input The Second Number: ");
//     scanf("%d",&y);
//     z = x % y;
//     printf("Your Output Is: %d",z);
// }












/*
Rectangle	
Area = x × y	
Perimeter = 2(x+y)
*/


// // Problem solution - 1

// #include <stdio.h>
// int main() {
//     int length, breadth;
//     printf("Enter the length of the rectangle: ");
//     scanf("%d", &length);
//     printf("Enter the breadth of the rectangle: ");
//     scanf("%d", &breadth);
//     // Perimeter = 2(x+y) ----- X = length and Y = perimeter
//     int perimeter = 2 * (length + breadth);
//     // Area = x × y --- X = length and Y = perimeter
//     int area = length * breadth;
//     // Output ---- 
//     printf("Perimeter : %d\n", perimeter);
//     printf("Area : %d\n", area);
// }














// Problem solution - 2

// #include <stdio.h>
// #define PI 3.14159
// int main() {
//   float radius;
//   printf("Enter the radius: ");
//   scanf("%f", &radius);
// // Calculate perimeter
//   float perimeter = 2 * PI * radius;
// //   Calculate area
//   float area = PI * radius * radius;
// // Output ----
//   printf("Perimeter of the circle: %f\n", perimeter);
//   printf("Area of the circle: %f\n", area);
// }




// Problem solution - 3

// #include <stdio.h>
// int main() {
//     float angle1;
//     float angle2;
//     printf("Enter the first angle: ");
//     scanf("%f", &angle1);
//     printf("Enter the second angle: ");
//     scanf("%f", &angle2);
//     float angle3 = 180 - (angle1 + angle2);
//     printf("The third angle of the triangle is: %f\n", angle3);
// }




// Problem solution - 4
// #include <stdio.h>
// int main() {
//     float centigrade;
//     printf("Enter temperature in Centigrade: ");
//     scanf("%f", &centigrade);
//     float fahrenheit = (centigrade * 9/5) + 32;
//     printf("%f°C is equal to %f°F\n", centigrade, fahrenheit);
// }



// Problem solution - 5

// #include <stdio.h>
// int main() {
//     float Fahrenheit;
//     printf("Enter Fahrenheit: ");
//     scanf("%f", &Fahrenheit);
//     float Centigrade = (Fahrenheit + 32) *  5/9 ;
//     printf("%f°C is equal to %f°F\n",Fahrenheit,Centigrade);
// }



// Problem solution - 6

// #include <stdio.h>
// int main() {
//      int bangla = 50;
//      int mat = 100;
//      int english = 98;
//      int csc = 100;
//     int c = 100;
//     //  Total Marke - 
//     float total = bangla + english + csc + mat + c;
//     // Average -- 
//     float average = total / 5;
//     float percentage = (total / (5 * 100)) * 100;
//     // Output -- 
//     printf("Total marks: %f\n", total);
//     printf("Average marks: %f\n", average);
//     printf("Percentage: %f%%\n", percentage);
// }






