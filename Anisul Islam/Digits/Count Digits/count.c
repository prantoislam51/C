

#include <stdio.h>
int main(){


    int number,count = 0, riminder;
    printf("Enter the number: ");
    scanf("%d",&number);
    while( number != 0){
        number = number / 10;
        count ++;
    }
    printf("Total Count = %d\n",count);
}