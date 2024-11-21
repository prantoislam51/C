


#include <stdio.h>

int main(){

    int numberOne,numberTwo,storOne,storTwo,reminder,gcd;
    printf("Inter The First Number: ");
    scanf("%d",&numberOne);
    printf("Inter The Secound Number: ");
    scanf("%d",&numberTwo);


    storOne = numberOne;
    storTwo = numberTwo;

    for (int i = numberTwo; storTwo!= 0; i++)
    {
        reminder = storOne % storTwo;
        storOne = storTwo;
        storTwo = reminder;
    }
    gcd = storOne;
    int lcm = (numberOne * numberTwo) / gcd;
    
    printf("LCM is = %d\n",lcm);
    printf("GCD is = %d\n",gcd);


}