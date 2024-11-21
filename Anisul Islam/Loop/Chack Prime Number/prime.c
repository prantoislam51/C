
#include <stdio.h>
int main(){

    int x= 1 ,count = 0;

    if (x <= 1)
    {
        count++;
    }
    for (int i = 2; i < x; i++){
        if (x % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        printf("This Is Not Prime Number: ");
    }
    else{
        printf("This Is prime Number: ");
    }
    

}