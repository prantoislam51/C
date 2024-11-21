

#include <stdio.h>
int main(){
    int range, first = 0, secoind = 1, stor,fibo;
    printf("Inter The Range: ");
    scanf("%d",&range);

    printf("%d\n%d",first,secoind);
    for (int i = 2; i < range; i++){
        fibo = first + secoind;
        first = secoind;
        secoind = fibo;
        printf("\n%d",fibo);
    }
}