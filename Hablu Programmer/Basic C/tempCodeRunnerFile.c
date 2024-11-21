#include <stdio.h>
int main() {
    float Fahrenheit;
    printf("Enter Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    float Centigrade = (Fahrenheit + 32) *  5/9 ;
    printf("%f°C is equal to %f°F\n",Fahrenheit,Centigrade);
}