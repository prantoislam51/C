

#include <stdio.h>
int main(){
    int x = 10;
    int y = 34;

    int large = (x > y) ? x:y;
    printf("Largest number is %d\n", large);

    return 0;

}