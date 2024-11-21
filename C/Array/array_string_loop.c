

#include <stdio.h>
int main(){
    char x[] = "hellohjfjghf";
    printf("%s\n", x);
    int length = sizeof(x) / sizeof(x[0]);
    // printf("%d\n", length);
    for (int i = 0; i < length; i++){
        printf("%c", x[i]);
    };
}