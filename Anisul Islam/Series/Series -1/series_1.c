

#include <stdio.h>
int main(){

    int number,sum = 0;
    printf("Inter The Number: ");
    scanf("%d",&number);

    for (int i = 1; i < number; i++)
    {
        printf("%d + ",i);
        sum = sum + i;
    }
    printf("Some of N Digits: \n%d\n",sum);
    
}