#include <stdio.h>
int main(){
    int x [] = {10,20,30,40,50,60,70,80,90,100};
    printf("%d\n",x[5]);
    x[5] = 600;
    printf("%d",x[5]);
}