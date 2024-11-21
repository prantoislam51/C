
#include <stdio.h>
void call(int y[]){
    int length = sizeof(y) / sizeof(y[0]);
    printf("%d", length);
}
int main(){
    int x[] = {0,1,2,3,4,5,6,9} ;
    int array_length = sizeof(x) / sizeof(x[0]);
    printf("%d\n",array_length);
    call(x);
}