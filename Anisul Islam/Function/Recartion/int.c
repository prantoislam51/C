


#include <stdio.h>

int fibo(int x){
    if( x == 1){
        return 1;
    }
    else{
        return x * fibo(x-1);
    }
}


int main(){

    int result = fibo(5);
    printf("%d\n",result);
}