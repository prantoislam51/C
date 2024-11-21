

#include <stdio.h>
int main(){

    int number, stor = 1;
    printf("Enter a number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        printf("%d \n",i);
        stor = stor * i;
    }
    printf("%d Factorial Is = %d",number,stor);
    
}