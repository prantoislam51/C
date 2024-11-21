

#include <stdio.h>
int main(){

    int number, sum = 0, riminder;
    printf("Inter The Number: ");
    scanf("%d",&number);
    int temp = number;
    while(number != 0){
        riminder = number % 10;
        sum = sum + (riminder * riminder * riminder);
        number = number / 10; 
    }
    if (sum == temp)
    {
        printf("This Number Is Armstrong = %d",temp);
    }
    else{
        printf("%d = This Number Is not Armstrong",temp);
    }
    
}