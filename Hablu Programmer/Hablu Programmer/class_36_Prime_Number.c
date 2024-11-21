
// 36 C Programming Prime Number Bangla Tutorial
#include <stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if ( x == 0 || x == 1)
    {
        printf("%d This number Is not prine.",x);
    }
    else if (x / 10)
    {
        printf("%d This number is prime.",x);
    }
    
    
}