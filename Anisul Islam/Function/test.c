


#include <stdio.h>
void lll (int a){
    a = 333;
}
int main(){
    int x= 10;
    printf("%d\n",x);
    lll(x);
    printf("%d\n",x);

    return 0;
}