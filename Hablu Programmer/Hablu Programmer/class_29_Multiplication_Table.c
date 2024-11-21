

// 29 C Programming Multiplication Table Bangla Tutorial

#include <stdio.h>

int main()
{
    int x,y,mati;
    printf("Input a Count Number: ");
    scanf("%d", &x);
    printf("Input range: ");
    scanf("%d",&y);
    for (int i = 1; i <= y; i++){
        mati = x *i;
        printf("%d * %d = %d\n",x,i,mati);
    }
}



