

#include <stdio.h>
void lld(int *y){
    (*y)++;
    printf("\n%d\n", *y);
}

int main(){
    int x = 10;
    int *d = &x;
    lld(d);
    printf("\n%d\n",x);
};