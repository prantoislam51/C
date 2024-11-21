

#include <stdio.h>
int main(){
    int x;
    x = 10;
    printf("Value Is : %d\n",x);
    printf("Arrression : %p\n", &x);

    int *p =&x;
    printf("Arrression : %p\n", &p);
    printf("Value Is : %d\n",*p);
}