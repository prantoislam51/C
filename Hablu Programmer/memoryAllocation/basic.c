
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){
    char x [20] = "Md. Prantto Islam";
    char *str2;
    str2 = malloc(20*sizeof(char));
    if (str2 == NULL)
    {
        printf("Failed to allocate memory");
    }
    else{
        strcpy(str2 , x);
    }
    printf("%s\n", x);
    printf("%s\n", str2);
    
}