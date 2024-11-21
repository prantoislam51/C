
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char strinng [30] = "Hellow World";
    char *pointtr;
    pointtr = calloc(100 , sizeof(char));
    if (pointtr == NULL)
    {
        printf("Error! Memory not allocated"); 
    }
    else{
        strcpy(pointtr , strinng);
    }
    printf("\n %s\n", pointtr);
    printf("\n %s\n", strinng);
    
}