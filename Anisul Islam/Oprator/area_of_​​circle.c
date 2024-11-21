


// Area of ​​circle------- A=πr2 / a = 3.1416*(a*a)
#include <stdio.h>
int main(){
    float r, pi = 3.1416, area; 
    printf("Inter The Radius: ");
    scanf("%f",&r);
    area = pi*(r*r);
    printf("The Area of Circle is: %.2f",area);
    return 0;
} 