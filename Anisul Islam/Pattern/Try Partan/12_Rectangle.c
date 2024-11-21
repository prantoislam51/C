


// Rectangle
// Rectangle

#include <stdio.h>
int main(){
    int number = 8;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j < number; j++)
        {
            if(i == 1 || i == number || j == 1 || j == number-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}